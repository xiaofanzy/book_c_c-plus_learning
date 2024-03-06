#ifndef __TV_H__
#define __TV_H__

#include <iostream>

using namespace std;

class Tv
{
private:
  enum{off,on};
  enum{MinVal,MaxVal = 20};
  enum{MinChan = 1,MaxChan = 100};
  enum{TV,DVD};

  int state;
  int vloume;
  int channel;
  int input;
public:
  Tv(int s = off) : state(s),vloume(5),channel(2),input(TV){};
  void onoff(){state = (state == on) ? off : on;}
  bool volup();
  bool voldowm();
  bool channup();
  bool chandown();
  void set_input(){input = (input == TV) ? DVD : TV;}
  void show_settings() const;
  ~Tv();


  friend class Remote;
};

class Remote
{
private:
  int mode;
public:
  Remote(int m = Tv::TV):mode(m){}
  void onoff(Tv &t) {t.onoff();}
  void volup(Tv &t){t.volup();}
  void voldown(Tv &t){t.voldowm();}
  void chanup(Tv &t){t.channup();}
  void chandown(Tv &t){t.chandown();}
  void set_channel(Tv &t,int c){t.channel = c;}
  void set_input(Tv &t){t.set_input();}
  ~Remote(){};
};

#endif