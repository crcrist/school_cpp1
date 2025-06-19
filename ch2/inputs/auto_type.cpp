#include <complex>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

int main() {
  // can be used here, but would be better for explicit typing
  auto x = 7;
  auto y = 7.7;

  std::cout << x << "\n" << y << "\n";

  // with longer type names and in generic programming it is more important
  auto z = std::complex<double>{1.3, 4.5};
  auto p = std::make_unique<std::pair<std::string, int>>("Harlem", 10027);

  std::cout << z << "\n";
  std::cout << p->first << ", " << p->second
            << "\n"; // print thet paris contents

  std::vector<int> lst = {1, 2, 3};
  auto b = lst.begin();
  std::cout << *b << "\n";

  return 0;
}
