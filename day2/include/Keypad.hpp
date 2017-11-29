#ifndef KEYPAD_H
#define KEYPAD_H

#include <vector>

using namespace std;

using Entries = vector<vector<char>>;

struct Coordinates {
  int x;
  int y;
};

class Keypad {
  private:
    const Entries entries;
    int boundedIndex(const int& position, const int& translation) const;

  public:
    Keypad(const Entries& entries);
    Coordinates operator() (const Coordinates& last, const char& instruction) const;
    char getEntry(const Coordinates& cooridinates) const;
};

#endif
