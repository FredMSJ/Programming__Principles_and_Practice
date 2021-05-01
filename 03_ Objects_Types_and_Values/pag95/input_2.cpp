#include "../../lib/std_lib_facilities.h"
int main()
{
  cout << "Please enter your first and second names\n";
  string first;
  string second;
  cin >> first >> second;
  cout << "Hello," << first << " " << second << '\n';
  keep_window_open();
  return 0;
}