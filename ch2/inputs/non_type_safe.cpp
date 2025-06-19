#include <iostream>

int main() {
  double x; // always initialize variable, if not it will pickup leftover bytes
            // from that memory location;
  double y = x;
  double z = 2.0 + x;
  std::cout << x << "\n";
  return 0;
}
