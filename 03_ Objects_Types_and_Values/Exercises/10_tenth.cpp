#include "../../lib/std_lib_facilities.h"

int main()
{
  string operation;
  double val1 = 0;
  double val2 = 0;
  double res = 0;
  cout << "Please enter the operation followed by two operands : \n";
  while (cin >> operation >> val1 >> val2)
  {
    if (operation == "+")
    {
      res = val1 + val2;
      cout << val1 << " " << operation << " " << val2 << " = " << res << "\n";
    }
    else if (operation == "-")
    {
      res = val1 - val2;
      cout << val1 << " " << operation << " " << val2 << " = " << res << "\n";
    }
    else if (operation == "*")
    {
      res = val1 * val2;
      cout << val1 << " " << operation << " " << val2 << " = " << res << "\n";
    }
    else if (operation == "/")
    {
      res = val1 / val2;
      cout << val1 << " " << operation << " " << val2 << " = " << res << "\n";
    }
    else if (operation == "end")
    {
      break;
    }
    else
    {
      cout << "Please just +, -, *, or /\n"
           << "Want stop? Tap end\n";
    }
  }
  keep_window_open();
}