#include "../../lib/std_lib_facilities.h"

int main()
{
  cout << "Please enter two names:\n";
  string first;
  string second;
  cin >> first >> second;
  if (first == second)
  {
    cout << "that's the same name twice\n";
  }
  if (first < second)
  {
    cout << first << " is alphabetically before " << second << '\n';
  }
  if (first > second)
  {
    cout << first << " is alphabetically after " << second << '\n';
  }

  keep_window_open();
  return 0;
}