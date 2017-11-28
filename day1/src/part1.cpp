#include <iostream>

#include "range/v3/istream_range.hpp"
#include "range/v3/algorithm/for_each.hpp"

#include "Player.cpp"

using namespace std;

int main() {
  Player player;
  auto instructions = ranges::istream_range<Instruction>(cin);

  ranges::for_each(instructions, [&player] (const Instruction& instruction) {
    player.move(instruction);
  });

  const Coordinates coordinates = player.getCoordinates();
  cout << abs(coordinates.x) + abs(coordinates.y) << endl;

  return EXIT_SUCCESS;
}
