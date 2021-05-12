#include "../../lib/std_lib_facilities.h"

int main()
{
  double val1 = 0;
  double val2 = 0;

  cout << "Please enter two floating-point values: Like(1 2)\n";
  cin >> val1 >> val2;

  if (val1 > val2)
  {
    cout << val2 << " is smaller. \n";
    cout << val1 << " is larger. \n";
  }
  if (val2 > val1)
  {
    cout << val1 << " is smaller. \n";
    cout << val2 << " is larger. \n";
  }

  cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
  cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
  cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
  cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";

  keep_window_open();
  return 0;
}