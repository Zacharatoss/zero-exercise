#### Project description

This project can read the cost of two options, going left and going right, and diside based of the smallest cost to either go left or go right.

#### Usage

You can use this project by compiling: gcc -O0 -m32 -Wall -Wextra -Werror -pedantic -o trolley trolley.c

And then: ./trolley


When the code is running it will ask for the two costs and provide the anserwes until using ctrl+D(EOF)


To see the time it took to complete the 10000 repeats use: time ./trolley < numbers.txt 

real    0m0,630s
user    0m0,047s
sys     0m0,115s

#### Examples 

Give cost of going left: 10 


Give cost of going right: 100


Go left


Give cost of going left: 41
Give cost of going right: 42
Go left
Give cost of going left: 42
Give cost of going right: 41
Go right
Give cost of going left: 1000000
Give cost of going right: 1000000
Go left
Give cost of going left: Terminating.
sdi2400048@linux12:~/hw0-Zacharatoss/trolley/src$ echo $?
0
sdi2400048@linux12:~/hw0-Zacharatoss/trolley/src$ ./trolley
Give cost of going left: 42
Give cost of going right: No right cost provided.
sdi2400048@linux12:~/hw0-Zacharatoss/trolley/src$ echo $?
1
sdi2400048@linux12:~/hw0-Zacharatoss/trolley/src$ ./trolley
Give cost of going left: 10000000000000
Give cost of going right: 4
Go right
Give cost of going left: -4
Give cost of going right: -4
Go left
Give cost of going left: Terminating.

