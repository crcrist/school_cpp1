#include "../PPPheaders.h"

int main() {
  string line;
  int num;
  double total;

  ifstream in_file;

  in_file.open("cs_input.txt");
  if (!in_file) {
    cerr << "Problem opening this file request." << endl;
    system("pause");
    return 1;
  }
  cout << "your file has been accepted." << endl;
  in_file >> line >> num >> total;
  cout << num << endl;
  cout << line << endl;

  in_file.close();
  return 0;
}
