#include "tabtenn1.h"

int main(void)
{
  RatePlayer rplayer1(1140,"Mallory","Duck",false);
  TableTennisPlayer player1("tara","boomdea",false);

  rplayer1.Name();
  if (rplayer1.HasTable())
  {
    cout << " has tablb." << endl;
  }
  else
  {
    cout << " hasn't table." << endl;
  }

  cout << rplayer1.Rating() << endl;
  
  RatePlayer rplayer2(555,rplayer1);
  rplayer2.Name();
  


  return 0;
}