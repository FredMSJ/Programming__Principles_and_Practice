#include "../../lib/std_lib_facilities.h"

int main()
{
  double d = 0;
  while (cin >> d) //repeat the statements below
  {                //as long we type in numbers
    int i = d;     //try to squeeze a double into a int
    char c = i;    //try to squeeze an int into a char
    int i2 = c;    //get the integer value of the character

    //char b1{1000}; //uncomment this on pag 112 and see the error :)

    cout << "d==" << d << " double\n"          //the original double
         << "i==" << i << " double to int\n"   //converted to int
         << "i2==" << i2 << " char to int\n"   //int value of char
         << "char(" << c << ") int to char\n"; //the char
    cout << "Again? (yes)\n";                  //The end of the program starts here :)
    string again;
    cin >> again;
    if (again == "yes")
    {
      continue;
    }
    else
    {
      break;
    }
  }
  return 0;
}