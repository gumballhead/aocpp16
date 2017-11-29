#include <iostream>

using namespace std;

struct Triangle {
  int a;
  int b;
  int c;
};

inline istream& operator >> (istream &input, Triangle& triangle) {
  input >> triangle.a;
  input >> triangle.b;
  input >> triangle.c;

  return input;
}

bool isValid(const Triangle& triangle);
