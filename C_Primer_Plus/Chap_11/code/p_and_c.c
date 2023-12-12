#include <stdio.h>

int main(void)
{

  char * mesg = "Don't be a full.\n";
  char * copy = mesg;

  printf("mesg = %s, address = %p,value = %p.\n",mesg,&mesg, mesg);

  printf("copy = %s, address = %p,value = %p.\n",copy,&copy, copy);

  return 0;
}