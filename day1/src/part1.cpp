#include <iostream>

#include "range/v3/istream_range.hpp"
#include "range/v3/algorithm/for_each.hpp"

#include "Player.cpp"

using namespace ranges;

int main() {
  Player player;
  auto instructions = istream_range<Instruction>(cin);

  for_each(instructions, [&player] (const Instruction& instruction) {
    player.move(instruction);
  });

  cout << player.getDistance() << endl;

  return EXIT_SUCCESS;
}
