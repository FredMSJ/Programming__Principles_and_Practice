#include "../../lib/std_lib_facilities.h"

int main()
{
  int number_of_words = 0;
  string previous = ""; //not a word
  string current;
  while (cin >> current)
  {
    ++number_of_words; //increase word count. could be number_of_word +=1
    if (previous == current)
    {
      cout << "word number " << number_of_words
           << " repeated: " << current << '\n';
    }
    previous = current; //put it out of "if" to work.
  }
  keep_window_open();
  return 0;
}