/*file:trolley.c*/
#include <stdio.h>

int main() {
int cl;
int cr;
printf ("give cost of going left");
scanf ("%d", &cl);
printf ("give cost of going right");
scanf ("%d", &cr);
while (cl==EOF || cr==EOF){
 printf ("give cost of going left");
scanf ("%d", &cl);
printf ("give cost of going right");
scanf ("%d", &cr);
}
return 0;
}
