/*file:trolley.c*/
#include <stdio.h>

int main() {
long long int cl;
long long int cr;
printf ("give cost of going left:");
scanf ("%lld", &cl);
printf ("give cost of going right:");
scanf ("%lld", &cr);
while (cl!=EOF | cr!=EOF){
 if (cl<=cr) {
   printf ("go left\n");
 }else{ 
   printf ("go right\n");
 }
 printf ("give cost of going left:");
 scanf ("%lld", &cl);
 printf ("give cost of going right:");
 scanf ("%lld", &cr);
}
return 1;
}
