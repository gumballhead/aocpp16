#include <iostream>

using namespace std;

struct Instruction {
  char direction;
  int distance;
};

inline istream& operator >> (istream& input, Instruction& instruction) {
  input >> instruction.direction;
  input >> instruction.distance;
  input.ignore(1, ' ');

  return input;
}
