#include "../PPPheaders.h"

int main() {

  ifstream in_file("cs_input.txt");
  ofstream out_file("cs_output.txt");

  if (!in_file) {
    cerr << "Error opening the input file." << endl;
    return 1;
  }

  if (!out_file) {
    cerr << "Error creating the output file." << endl;
    return 1;
  }

  string line{};
  while (getline(in_file, line))
    out_file << line << endl;

  cout << "File was copied successfully." << endl;

  in_file.close();
  out_file.close();

  return 0;
}
