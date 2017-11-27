#include "day1/Player.hpp"

Player::Player() : coordinates({0, 0}), bearing(NORTH) {}

Player::Player(const Bearing& bearing, const Coordinates& coordinates)
  : bearing(bearing), coordinates(coordinates) {}

void Player::move(const Instruction& instruction) {
  turn(instruction.direction);
  walk(instruction.distance);
}

void Player::turn(const char& direction) {
  switch (direction) {
    case 'L': {
      bearing--;
      break;
    }

    case 'R': {
      bearing++;
      break;
    }
  }
}

void Player::walk(const int& distance = 1) {
  switch (bearing) {
    case NORTH: {
      coordinates.y += distance;
      break;
    }

    case EAST: {
      coordinates.x += distance;
      break;
    }

    case SOUTH: {
      coordinates.y -= distance;
      break;
    }

    case WEST: {
      coordinates.x -= distance;
      break;
    }
  }
}

Coordinates Player::getCoordinates() {
  return coordinates;
}
