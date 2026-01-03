/*
FYI.c
Kattis Solution for Kattis problem FYI
https://open.kattis.com/problems/fyi
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    n /= 10000;
    printf("%d\n", n == 555);

    return 0;
}
