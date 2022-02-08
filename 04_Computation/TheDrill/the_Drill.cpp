#include "../../lib/std_lib_facilities.h"

int main()
{
  int temp = 0;
  while(temp == 0)
  {
    cout << "Please ennter two numbers followed by spaceblanks:" << "\n";
    double prime;

    cin >> prime;
    
    double first = 0;
    double second = 0;


    if(first == 0 || first <= prime)
    {
      first = prime;
    }

    if(second == 0 || second >= prime)
    {
      second = prime;
    }

    cout << "The smaller value so far is: " << first << "\n";
    cout << "The larger value so far is: " << second << "\n";

  }

  keep_window_open();
}