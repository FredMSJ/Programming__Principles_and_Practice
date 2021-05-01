#include "../../lib/std_lib_facilities.h"

int main()
{
  cout << "Please enter a floating-point value: ";
  double n;
  cin >> n;
  cout << "n == " << n
       << "\nn+1 == " << n + 1
       << "\nthree times n == " << 3 * n
       << "\ntwice n == " << n + n
       << "\nn squared == " << n * n
       << "\nhalf of n == " << n / 2
       << "\nsquared root of n == " << sqrt(n) << '\n';
  keep_window_open();
  return 0;
}