#include <algorithm>
#include <iostream>
#include <string>

#include "range/v3/getlines.hpp"
#include "range/v3/view/transform.hpp"
#include "range/v3/numeric/accumulate.hpp"
#include "range/v3/to_container.hpp"

#include "Keypad.hpp"

using namespace std;

Keypad::Keypad(const Entries& entries): entries(entries) {}

int Keypad::boundedIndex(const int& position, const int& translation) const {
  return min(max(0, position + translation), static_cast<int>(entries.size()) - 1);
}

Coordinates Keypad::operator() (const Coordinates& last, const char& instruction) const {
  Coordinates coordinates = last;

  switch (instruction) {
    case 'L': {
      coordinates.x = boundedIndex(coordinates.x, -1);
      break;
    }

    case 'U': {
      coordinates.y = boundedIndex(coordinates.y, -1);
      break;
    }

    case 'R': {
      coordinates.x = boundedIndex(coordinates.x, 1);
      break;
    }

    case 'D': {
      coordinates.y = boundedIndex(coordinates.y, 1);
      break;
    }
  }

  return getEntry(coordinates) == 0 ? last : coordinates;
}

char Keypad::getEntry(const Coordinates& coordinates) const {
  return entries.at(coordinates.y).at(coordinates.x);
}

string getCode(istream& input, const Keypad& keypad, Coordinates coordinates) {
  auto instructions = ranges::getlines(input);

  const auto code = ranges::view::transform(instructions,
    [&keypad, &coordinates] (const string& line) {
      coordinates = ranges::accumulate(line, coordinates, keypad);
      return keypad.getEntry(coordinates);
    })

  | ranges::to_vector;

  return string(code.data(), code.size());
}
