/*file:trolley.c*/
#include <stdio.h>

int main() {
long long int cl;
long long int cr;
printf ("give cost of going left:");
scanf ("%lld", &cl);
if (cl==50){
 return 0;
}
printf ("give cost of going right:");
scanf ("%lld", &cr);
if (cr==50){
 return 1;
}
while (cl!=50 && cr!=50) {
 if (cl<=cr) {
   printf ("go left\n");
 }else{ 
   printf ("go right\n");
 } 
printf ("give cost of going left:");
 scanf ("%lld", &cl);
if (cl==50){
 return 0;
}
 printf ("give cost of going right:");
 scanf ("%lld", &cr);
if (cr==50){
 return 1;
}
}
}
