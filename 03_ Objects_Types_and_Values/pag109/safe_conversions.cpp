#include "../../lib/std_lib_facilities.h"

int main()
{
  char c = 'x';
  int i1 = c;
  int i2 = 'x'; //both i1 and i2 get the value 120 => We call this "Char-to-int".
  char c2 = i1;

  cout << c << ' ' << i1 << ' ' << c2 << '\n';
  keep_window_open();
}