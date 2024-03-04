#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Worker
{
	private:
		string fullname;
		long id;
	protected:
		virtual void Get();
		virtual void Data() const;
	public:
		Worker() : fullname("Null name"),id(0){}
		Worker(const string &s,long n) : fullname(s), id(n){}
		virtual ~Worker(){}
		virtual void Set() = 0;
		virtual void Show() const = 0;
};

class Waiter : public virtual Worker
{
	private:
		int panache;
	protected:
		virtual void Get();
		virtual void Data() const;
	public:
		Waiter(): Worker(),panache(0){}
		Waiter(const string &s,long n,int p) : Worker(s,n),panache(p){}
		Waiter(const Worker &s,int p) : Worker(s),panache(p){}
		virtual void Set();
		virtual void Show() const;

};

class Singer : virtual public Worker
{
	protected:
		enum{other,alto,contralto,sopranp,bass,baritone,tenor};
		enum{Vtypes = 7};
		virtual void Get();
		virtual void Data() const;
	private:
		static const char *pv[Vtypes];
		int voice;
	public:
		Singer() : Worker(),voice(other){}
		Singer(const string &s,long n,int v) : Worker(s,n),voice(v){}
		Singer(const Worker &wk,int v) : Worker(wk),voice(v){}
		void Set();
		void Show() const;
	
};	

class SingerWaiter : public Waiter,public Singer
{
	//private:
	protected:
		void Get(){}
		void Data() const {}
	public:
		SingerWaiter() :Worker(),Waiter(),Singer(){}
		SingerWaiter(const string &s,long n,int p = 0,int v = other) : Worker(s,n),Waiter(s,n,p),Singer(s,n,v){}
		SingerWaiter(const Worker &wk,int p = 0,int v = other) : Worker(wk),Waiter(wk,p),Singer(wk,v){}
		void Set();
		void Show() const;
};

