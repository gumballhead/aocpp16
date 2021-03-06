#include <functional>

using namespace std;

struct Coordinates {
  int x;
  int y;
};

inline bool operator == (const Coordinates& first, const Coordinates& second) {
  return first.x == second.x && first.y == second.y;
}

class CoordinatesHash {
  const hash<int> hashInt;

  public:
    size_t operator () (const Coordinates& coordinates) const {
      return 17 + (31 * hashInt(coordinates.x)) + (31 * hashInt(coordinates.y));
    }
};
