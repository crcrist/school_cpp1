#include "PPPheaders.h"
#include <iostream>

constexpr int frame_width = 1;

int area(int length, int width) {
  if (length <= 0 || width <= 0)
    error("non-positive area() argument");
  return length * width;
}

int framed_area(int x, int y) {
  if (x - frame_width <= 0 || y - frame_width <= 0)
    error("non-positive area() argument called by framed_area()");
  return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z) {
  if (x <= 0 || y <= 0)
    error("non-positive arguments to f()");
  if (z <= 0)
    error("non-positive z argument to f()");

  int area1 = area(x, y);
  cout << "area1: " << area1 << '\n';

  int area2 = framed_area(3, z);
  cout << "area2: " << area2 << '\n';

  int area3 = framed_area(y, z);
  cout << "area3: " << area3 << '\n';

  if (area3 == 0)
    error("division by zero in ratio calculation");

  double ratio = double(area1) / area3;
  cout << "ratio: " << ratio << '\n';

  return 0;
}

int main() {
  // syntax errors
  /*
  int s1 = area(7, 2;
  int s2 = area(7, 2)
  Int s3 = area(7, 2);
  int s4 = area('7,2);
  */

  // type errors
  // int x0 = arena(7, 2);
  // int x1 = area(7);
  // int x2 = area("seven", 2);
  // int x2 = area(123213.123, 5, 1);
  // string x2 = area(2, 4);

  // cout << x2 << '\n';

  double x = f(10, 6, 5);

  cout << x << '\n';

  return 0;
}
