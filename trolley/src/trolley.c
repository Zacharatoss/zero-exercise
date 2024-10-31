/*file:trolley.c*/
#include <stdio.h>

int main() {
long long int  cl;
long long int  cr;
printf ("give cost of going left: ");
scanf ("%lld", &cl);
if( cl != 1 ) {
    printf("terminating.\n");
    return 0;
  }
printf ("give cost of going right: ");
scanf ("%lld", &cr);
if( cr != 1 ) {
    printf(" No right cost provided.\n");
    return 1;
  }
while (1) {
 if (cl<=cr) {
   printf ("go left\n");
 }else{ 
   printf ("go right\n");
 } 
 printf ("give cost of going left: ");
if( scanf("%lld", &cl) != 1 ) {
    printf("terminating.\n");
    return 0;
  }
 printf ("give cost of going right: ");
 if( scanf("%lld", &cr) != 1 ) {
    printf(" No right cost provided.\n");
    return 1;
  }
}
}
