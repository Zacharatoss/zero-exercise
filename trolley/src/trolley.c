/*file:trolley.c*/
#include <stdio.h>

int main() {
long long int  cl;
long long int  cr;
printf ("give cost of going left:");
scanf ("%lld", &cl);
printf ("give cost of going right:");
scanf ("%lld", &cr);
while (1) {
 if (cl<=cr) {
   printf ("go left\n");
 }else{ 
   printf ("go right\n");
 } 
 printf ("give cost of going left:");
if( scanf("%lld", &cl) != 1 ) {
    printf("terminate!\n");
    return 1;
  }
 printf ("give cost of going right:");
 if( scanf("%lld", &cr) != 1 ) {
    printf("terminate!\n");
    return 1;
  }
}
}
