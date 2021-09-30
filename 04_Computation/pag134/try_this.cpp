#include "../../lib/std_lib_facilities.h"

int main()
{
  int a = 'a';
  int z = 'z';

  while (a <= z)
  {
    cout << '\t' << char(a) << '\t' << a << '\n';
    a++;
  }

  // while (resultadz > resultada)
  // {
  //   cout << resultada << '\n';
  //   resultada++;
  // }

  keep_window_open();
}