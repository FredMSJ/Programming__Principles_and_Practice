#include "../../lib/std_lib_facilities.h"

int main()
{
  vector<string> words;
  for (string temp; cin >> temp;)
  {
    words.push_back(temp);
  }

  cout << "Number of words: " << words.size() << '\n';
  sort(words);

  for (int i; i < words.size(); i++)
  {
    if (i == 0 || words[i - 1] != words[i])
    {
      if (words[i] == "Broccoli" || words[i] == "Teste" || words[i] == "Sentry")
      {
        words[i] = "BLEEP";
      }
      cout << words[i] << "\n";
    }
  }
  keep_window_open();
}

// Why "BLEEP" goes first in the cout??