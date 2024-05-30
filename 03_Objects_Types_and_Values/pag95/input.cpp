#include "../../lib/std_lib_facilities.h"

int main()
{
  cout << "Please enter your first name and age\n";
  string first_name = "???";
  int age = -1;
  cin >> first_name >> age;
  cout << "Hello," << first_name << " (age " << age << ")\n";

  keep_window_open();
  return 0;
}