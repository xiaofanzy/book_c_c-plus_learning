#include <stdio.h>

int main(void){

   int feet, fathoms;
   fathoms = 2;
   feet = fathoms * 6;

   printf("There are %d fathoms in %d feet.\n", fathoms, feet);
   printf("Yes i said %d feet!\n", 6 * fathoms); 

   return 0;

}