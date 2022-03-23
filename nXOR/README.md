# Code Golf: N-input XOR gate
A C program that simulates an N-input XOR gate (odd-parity check), written using as few characters as possible.

compile using:
> gcc main.c -o out

example usage:
> ./out 0 1
1
> ./out 0 1 1
0
> ./out 0 1 1 1
1
> ./out 0 1 1 1 1
0
