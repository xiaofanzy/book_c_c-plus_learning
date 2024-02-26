#ifndef __TABLENN1_H__
#define __TABLENN1_H__

#include <iostream>
#include <string>

using namespace std;


class TableTennisPlayer
{
private:
  string fristname;
  string lastname;
  bool hasTable;
public:
  TableTennisPlayer(const string &fn = "none",const string &ln = "none",
  bool ht = false);
  ~TableTennisPlayer();
  void Name() const;
  bool HasTable() const {return hasTable;}
  void ResetTable(bool v){hasTable = v;}
};

class RatePlayer : public TableTennisPlayer
{
private:
  unsigned int rating;
public:
  RatePlayer(unsigned int r = 0,const string &fn = "none",const string &ln = "none",bool nt = false);
  ~RatePlayer();
  RatePlayer(unsigned int r,const TableTennisPlayer &tp);
  unsigned int Rating() const {return rating;}
  void ResetRating(unsigned int r){rating = r;}
};

#endif