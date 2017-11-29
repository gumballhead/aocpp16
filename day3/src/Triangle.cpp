#include "Triangle.hpp"

bool isValid(const Triangle& triangle) {
  const int& a = triangle.a;
  const int& b = triangle.b;
  const int& c = triangle.c;

  return a + b > c && a + c > b && b + c > a;
}
