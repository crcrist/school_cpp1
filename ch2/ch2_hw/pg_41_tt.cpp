#include <iostream>

int main() {
  std::string s = "Goodbye, cruel world!";
  std::cout << s << '\n';
  return 0;
}

// the errors received were
// s-ts pg_41_tt.cpp -o pg_41_tt && ./pg_41_tt
// pg_41_tt.cpp: In function ‘int Main()’:
// pg_41_tt.cpp:4:8: error: ‘STRING’ is not a member of ‘std’
//    4 |   std::STRING s = "Goodbye, cruel world!";
//      |        ^~~~~~
// pg_41_tt.cpp:5:8: error: ‘cOut’ is not a member of ‘std’; did you mean ‘cou
// t’?
//    5 |   std::cOut << S << '\n';
//      |        ^~~~
//      |        cout
// pg_41_tt.cpp:5:16: error: ‘S’ was not declared in this scope
//    5 |   std::cOut << S << '\n';
//      |
//
//
//      the problems it found were that
//      Main is spelled with capitalization
//      STRING is spelled in capitalization
//      cOut has capitalization incorrectly
//      S is capitalized when the declared string is lowercase
//
//      the messages seemed to go away one at a time, however when doing
//      research i noticed that there could be 'cascading errors' depending on
//      how the code is written. In this exercise the errors are isolated so
//      would not cause that cascading, but depending on how the errors are
//      written, there could be additional errors called out by the compiler
//      that are due to other errors in the code. This would cause the
//      appearance of additional errors that are not true, but only being caused
//      by the earlier error.
//
//
//
//
