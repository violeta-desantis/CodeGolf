# Code Golf: OneTwo
A C program that reorders a string by moving the first character to come after the next two characters - repeating for each set of 3 characters in the string, written using as few characters as possible.

compile using:
> gcc main.c -o out

example usage:
> ./out abc
bca
> ./out nhk
hkn
> ./out Drexel
reDelx
> ./out rcpe
cpre
