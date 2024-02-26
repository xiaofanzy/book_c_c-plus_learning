#include "tabtenn1.h"


TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln,bool ht)
{
  fristname = fn;
  lastname = ln;
  hasTable = ht;
}

TableTennisPlayer::~TableTennisPlayer()
{

}

void TableTennisPlayer::Name() const
{
  cout << lastname << ", " << fristname << endl;
}

RatePlayer::RatePlayer(unsigned int r,const string &fn,const string &ln,bool wt)
  : TableTennisPlayer(fn,ln,wt)
{
  rating = r;
}

RatePlayer::~RatePlayer()
{

}

RatePlayer::RatePlayer(unsigned int r,const TableTennisPlayer &tp) : TableTennisPlayer(tp),rating(r)
{

}


