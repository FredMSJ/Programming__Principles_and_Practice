#include "../../lib/std_lib_facilities.h"

int main()
{
  int z = 'Z'; //Just define Z instead z.

  for (int a = 'A'; a <= z; a++) //Just defide the A instead a.
  {
    cout << '\t' << char(a) << '\t' << a << '\n';
  }

  keep_window_open();
  return 0;
}