#include <iostream>

int main() {
  // alternative ways to initialize
  // int x0 = 7.8;
  // int x1{7.8};    // gives warning
  // int x2 = {7.8}; // gives warning
  // int x3(7.8);

  // std::cout << x0 << "\n" << x1 << "\n" << x2 << "\n" << x3 << "\n";

  // showing data loss through narrow conversion
  double d = 0;
  while (std::cin >> d) {
    int i = d;
    char c = i;
    std::cout << "d==" << d << "i==" << i << "c==" << c << " char(" << c
              << ")\n";
  }
}
