enum Bearing {
  NORTH,
  EAST,
  SOUTH,
  WEST
};

inline Bearing operator++ (Bearing &bearing, int ignored) {
  Bearing result = bearing;

  bearing = bearing == WEST
    ? NORTH
    : static_cast<Bearing>(static_cast<int>(bearing) + 1);

  return result;
}

inline Bearing& operator++ (Bearing &bearing) {
  bearing = bearing == WEST
    ? NORTH
    : static_cast<Bearing>(static_cast<int>(bearing) + 1);

  return bearing;
}

inline Bearing operator-- (Bearing &bearing, int ignored) {
  Bearing result = bearing;

  bearing = bearing == NORTH
    ? WEST
    : static_cast<Bearing>(static_cast<int>(bearing) - 1);

  return result;
}

inline Bearing& operator-- (Bearing& bearing) {
  bearing = bearing == NORTH
    ? WEST
    : static_cast<Bearing>(static_cast<int>(bearing) - 1);

  return bearing;
}
