/*file:trolley.c*/
#include <stdio.h>

int main() {
long long int  cl;
long long int  cr;
printf ("Give cost of going left: ");
if( scanf ("%lld", &cl) != 1 ) {              //Reads and checks if the cost of going left (cl) is correct and not EOF.
    printf("Terminating.\n");
    return 0;                                //If the cost of going left is EOF then the programe ends with an exit cost of 0
  }
printf ("Give cost of going right: ");        //Reads and checks if the cost of going right (cr) is correct and not EOF.
if( scanf ("%lld", &cr) != 1 ) {
    printf("No right cost provided.\n");
    return 1;                                  //If the cost of going right is EOF then the programe ends with an exit cost of 1
  }
while (1) {                               //the loop will continue until either the left cost is EOF or the right cost is invalid
 if (cl<=cr) {                              //checks if the right cost is greater or equal to the left cost and prints the direction that the trolley must follow 
   printf ("Go left\n");
 }else{ 
   printf ("Go right\n");
 } 
 // repeats the reading and checking of the cost that are provided
 printf ("Give cost of going left: ");
if( scanf("%lld", &cl) != 1 ) {
    printf("Terminating.\n");
    return 0;
  }
 printf ("Give cost of going right: ");
 if( scanf("%lld", &cr) != 1 ) {
    printf(" No right cost provided.\n");
    return 1;
  }
}
}
