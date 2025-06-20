#include "../PPPheaders.h"

int main() {

  ofstream out_file("cs_makefile.txt");
  if (!out_file) {
    cerr << "Error creating the output file." << endl;
    return 1;
  }

  string line;

  cout << "Enter something you would like to tell me and i will create a file!";
  getline(cin, line);
  out_file << line << endl;

  out_file.close();

  return 0;
}
