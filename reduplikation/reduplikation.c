/*
reduplikation.c
Kattis solution of reduplikation
https://open.kattis.com/problems/reduplikation
Hossein Eldelbani
*/

#include <stdio.h>

int main()
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
