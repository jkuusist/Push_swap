# Push_swap

My solution for 42's push_swap project. This project is about sorting integers using two stacks and specific operations. You must create two executables. One is called push_swap,
which takes a list of integers as argument, then outputs a list of instructions which sorts those integers so that the smallest one is at the top of the stack and the largest
is at the bottom. The other is called checker, which takes a list of integers as argument, then takes instructions as input from the user and print "OK" or "KO" depending on
whether the given instructions sorted the given integers. Both executables print "Error" in case of any error, such as duplicate integers, numbers larger than INT_MAX or smaller
than INT_MIN, nonexistent instructions or improper formatting.

You can also pipe the output of push_swap into checker to check if the solution push_swap came up with actually sorts the given numbers.

The allowed operations are:\
sa - Swaps the top 2 elements of stack A\
sb - Swap the top 2 elements of stack B\
ss - sa and sb at the same time\
pa - Pushes the top element of stack B to the top of stack A\
pb - Pushes the top element of stack A to the top of stack B\
ra - Rotates stack A so that the top element goes to the bottom and all the rest shift up by 1\
rb - Rotates stack B so that the top element goes to the bottom and all the rest shift up by 1\
rr - ra and rb at the same time\
rra - Rotates stack A so that the bottom element goes to the top and all the rest shift down by 1\
rrb - Rotates stack B so that the bottom element goes to the top and all the rest shift down by 1\
rrr - rra and rrb at the same time


Usage: 'make' to create the executables

./checker 2 1 3\
sa\
rra\
pb\
Ctrl+D to tell the program you're done giving instructions

-----
./push_swap 1 5 2 4 3

-----
./push_swap "43 5 42"

-----
ARG="12 63 55 7"; ./push_swap $ARG

-----
ARG="12 63 55 7"; ./push_swap $ARG | ./checker $ARG
