#include "../std_lib_facilities.h"

int main()
{
  cout << "Please enter your firt name and age.\n";
  string first_name;
  int age;
  cin >> first_name;
  cin >> age;
  cout << "Hello, " << first_name << " (age " << age << ")\n";
  keep_window_open();
  return 0;
}