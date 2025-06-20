#include "../PPPheaders.h"

int main() {
  string line;
  int num;
  double total;

  ifstream in_file;

  in_file.open("ch1_mobydick.txt");
  if (!in_file) {
    cerr << "Problem opening this file request." << endl;
    system("pause");
    return 1;
  }

  char c{};

  while (in_file.get(c)) {
    cout << c;
  }
  cout << endl;

  in_file.close();
  return 0;
}
