#include <iostream>

#include "range/v3/istream_range.hpp"
#include "range/v3/algorithm/count_if.hpp"

#include "Triangle.cpp"

using namespace std;

int main() {
  auto triangles = ranges::istream_range<Triangle>(cin);
  cout << ranges::count_if(triangles, isValid) << endl;

  return EXIT_SUCCESS;
}
