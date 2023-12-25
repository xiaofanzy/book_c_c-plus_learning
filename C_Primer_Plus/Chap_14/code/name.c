#include <stdio.h>
#include <string.h>

struct name
{
  char first[20];
  char last[20];
  int leng;
};

struct name getinfo(void);
struct name getsize(struct name p);
void showinfo(const struct name p);
void getinfo1(struct name *pt);
void getsize1(struct name *pt);

int main(void)
{
  	struct name person; 
  	puts("show infos.\n");
  	person = getinfo();
  	person = getsize(person);
  	showinfo(person);

	// part 2
	struct name person1;
	getinfo1(&person1);
	getsize1(&person1);
	showinfo(person1);

	  return 0;
}

void getinfo1(struct name *pt)
{
  printf("Please enter the fisrt name:");
	gets(pt->first);
	printf("Please enter the last name:");
	gets(pt->last);
}

void getsize1(struct name *pt)
{
  pt->leng = strlen(pt->first) + strlen(pt->last);
}

struct name getinfo(void)
{
	struct name temp;
	printf("Please enter the fisrt name:");
	gets(temp.first);
	printf("Please enter the last name:");
	gets(temp.last);

	return temp;
}

struct name getsize(struct name p)
{
	p.leng = strlen(p.first) + strlen(p.last);
	
	return p;
}

void showinfo(const struct name p)
{
	printf("%s %s your name has %d letters.\n",p.first, p.last, p.leng);

}
