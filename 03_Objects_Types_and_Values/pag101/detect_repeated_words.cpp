#include "../../lib/std_lib_facilities.h"

int main()
{
  string previous = "";
  string current;
  while (cin >> current) //the program will read all the sentence.
  {                      //remmember that >> read whitespace separated
    if (previous == current)
    {
      cout << "repeated word: " << current << '\n';
    }
    previous = current;
  }

  keep_window_open();
  return 0;
}

//Try this => "She" != "she" ;> *pag 102