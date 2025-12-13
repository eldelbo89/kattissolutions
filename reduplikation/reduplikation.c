/*
reduplikation.c
Kattis Solution for Kattis problem reduplikation
https://open.kattis.com/problems/reduplikation
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
    int n;      // to store a digit between 1 and 9
    char s[11]; // to store the string to be repeated 2<=|s|<=10

    scanf("%10s", s);
    scanf("%d", &n);
    while (n--)
    {
        printf("%s", s);
    }
}
