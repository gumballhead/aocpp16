#include "Bearing.hpp"
#include "Coordinates.hpp"
#include "Instruction.hpp"

class Player {
  private:
    Bearing bearing;
    Coordinates coordinates;

  public:
    Player();
    Player(const Bearing& bearing, const Coordinates& coordinates);
    void move(const Instruction& instruction);
    void turn(const char& direction);
    void walk(const int& distance);
    Coordinates getCoordinates();
};
