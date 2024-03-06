#ifndef __TV_H__
#define __TV_H__

#include <iostream>

using namespace std;

class Tv;

class Remote
{
private:
	int mode;
	enum{off, on};
	enum{MinVal, MaxVal = 20};
	enum{MinChan = 1, MaxChan = 100};
	enum{TV, DVD};
public:
	Remote(int m = TV):mode(m){}
  void onoff(Tv &t);
  void volup(Tv &t);
  void voldown(Tv &t);
  void chanup(Tv &t);
  void chandown(Tv &t);
  void set_channel(Tv &t,int c);
  void set_input(Tv &t);
  ~Remote(){};
};



class Tv
{
	private:
		enum{off,on};
		enum{MinVal,MaxVal = 100};
		enum{MinChan = 1,MaxChan = 100};
		enum{TV,DVD};

		int state;
		int volume;
		int channel;
		int input;
	public:
		Tv(int s = off) :state(s),volume(5),channel(2),input(TV){}
		void onoff(){state = (state == off ? on : off);}
		bool volup();
		bool voldowm();
		bool channup();
		bool channdown();
		void set_input(){input = (input == TV ? DVD : TV);}
		void show_setting() const; 
		~Tv();

		friend void Remote::set_channel(Tv &t, int c);
};


inline void Remote::onoff(Tv &t) {t.onoff();}
inline void Remote::volup(Tv &t){t.volup();}
inline void Remote::voldown(Tv &t){t.voldowm();}
inline void Remote::chanup(Tv &t){t.channup();}
inline void Remote::chandown(Tv &t){t.channdown();}
inline void Remote::set_channel(Tv &t, int c){t.channel = c;}
inline void Remote::set_input(Tv &t){t.set_input();}


#endif
