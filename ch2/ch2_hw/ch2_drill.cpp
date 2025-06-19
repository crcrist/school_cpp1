#include "PPPheaders.h"
#include <iostream>

int main() {
  string first_name;
  cout << "Enter the name of the person you want to write to\n";
  cin >> first_name;
  cout << "Dear " << first_name << ",\n";

  cout << "\tHow are you pal long time no see! Lets write some c++ soon.\n";

  string friend_name;
  cout << "What is the name of a mutual friend?\n";
  cin >> friend_name;
  cout << "Have you seen " << friend_name << " lately?\n\n";

  int age = 0;
  cout << "What is the age of the person receiving the letter?\n";
  cin >> age;

  cout << "I hear you just had a birthday and you are " << age << " years old."
       << "\n";
  if (age <= 0 || age >= 110)
    simple_error("you're kidding!\n");

  if (age < 12 && age > 0)
    cout << "Next year you will be " << age + 1 << ".\n";

  if (age == 17)
    cout << "Next year you will be able to vote\n";

  if (age > 70)
    cout << "Are you retired?\n";

  cout << "Yours sincerely, \n\nConnor Crist\n";

  return 0;
}
