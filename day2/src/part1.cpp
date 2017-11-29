#include <iostream>
#include <string>

#include "Keypad.cpp"

using namespace std;

int main() {
  const Keypad keypad {{
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
  }};

  const string code = getCode(cin, keypad, Coordinates { 1, 1 });
  cout << code << endl;

  return EXIT_SUCCESS;
}
