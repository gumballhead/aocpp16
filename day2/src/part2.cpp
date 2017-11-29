#include <iostream>
#include <string>

#include "Keypad.cpp"

using namespace std;

int main() {
  const Keypad keypad {{
    { 0 ,  0 , '1',  0 ,  0 },
    { 0 , '2', '3', '4',  0 },
    {'5', '6', '7', '8', '9'},
    { 0 , 'A', 'B', 'C',  0 },
    { 0 ,  0 , 'D',  0 ,  0 }
  }};

  const string code = getCode(cin, keypad, Coordinates { 2, 0 });
  cout << code << endl;

  return EXIT_SUCCESS;
}
