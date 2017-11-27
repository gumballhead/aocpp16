#include <iostream>
#include <unordered_set>

#include "range/v3/istream_range.hpp"
#include "range/v3/algorithm/any_of.hpp"

#include "Player.cpp"

using namespace std;

int main() {
  Player player;
  unordered_set<Coordinates, CoordinatesHash> path;

  auto instructions = ranges::istream_range<Instruction>(cin);

  const bool& found = ranges::any_of(instructions, [&player, &path] (const Instruction& instruction) {
    player.turn(instruction.direction);

    for (int i = 0; i < instruction.distance; i++) {
      player.walk();

      const Coordinates& coordinates = player.getCoordinates();

      if (path.find(coordinates) != path.end()) {
        return true;
      }

      path.insert(coordinates);
    }

    return false;
  });

  if (!found) {
    cout << "Couldn't find Easter Bunny HQ!" << endl;
    exit(EXIT_FAILURE);
  }

  const Coordinates& coordinates = player.getCoordinates();
  cout << abs(coordinates.x) + abs(coordinates.y) << endl;

  return EXIT_SUCCESS;
}
