#include "Player.hpp"

Player::Player()
  : bearing(NORTH), coordinates({0, 0}) {}

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

Coordinates Player::getCoordinates() const {
  return coordinates;
}

int Player::getDistance() const {
  return std::abs(coordinates.x) + std::abs(coordinates.y);
}
