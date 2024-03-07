#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

const int NUM = 26;

int main(int argc, char const *argv[])
{
  const string wordlist[NUM] = {
	"apiary", "beetle", "cereal", "danger", "ensign", "florid",
	"health", "insult", "jackal", "keeper", "loaner", "manage",
	"nonce",  "onset",  "plaid",  "quilt",  "remote", "stolid",
	"train",  "useful", "valid",  "whence", "xenon",  "yearn",
	"zippy"
  };

  char play;

  cout << "Will you play a word game? <Y/N>";
  cin>> play;
  play = tolower(play);

  srand(time(0));

  while (play == 'y')
  {
    string target = wordlist[rand() % NUM];
    int length = target.length();
    string attempt(length,'-');
    string badchars;
    int guesses = 6;
    cout << "guess my word;" << endl;
    cout << attempt << endl;

    while (guesses > 0 && attempt != target)
    {
      char letter;
      cout << "Guess a letter: ";
      cin >> letter;

      if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
      {
        cout << "you have already guessed that,try again." << endl;
        continue;
      }

      int loc = attempt.find(letter);

      if (loc == string::npos)
      {
        cout << "Oh bad guess! " << endl;
        guesses--;
        badchars +=letter;
      }
      else
      {
        cout << "Good guess!" << endl;
        attempt[loc] = letter;
        loc = target.find(attempt,loc+1);
        while (loc != string::npos)
        {
          attempt[loc] = letter;
          loc = target.find(attempt,loc + 1);
        }
      }

      cout << "Your word : " << attempt << endl;
      if (attempt != target)
      {
        if (badchars.length() > 0)
        {
          cout << "Bad choices "<< badchars << endl;
          cout << guesses << " bad guesses left!" << endl;
        }
      }
      if(guesses > 0 || attempt == target)
        cout << "That is right!" << endl;
      else
      {
        cout << "Sorry, the word is " << target << ", will you play another time?<y/n>";
        cin >> play;
        play = tolower(play);
      }

      
      
    }
    

  }
  

  return 0;
}
