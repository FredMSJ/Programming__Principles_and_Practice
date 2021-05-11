#include "../../lib/std_lib_facilities.h"

int main()
{
  double miles;
  double kilometers;
  double miles_to_kilometers = 1609;

  cout << "Enter the miles to convert in kilometers: \n";
  cin >> miles;

  kilometers = miles * miles_to_kilometers;

  cout << "In " << miles << " miles, we have " << kilometers << " killometers \n";

  keep_window_open();
  return 0;
}