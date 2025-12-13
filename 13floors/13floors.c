/*
13floors.c
Kattis Solution for Kattis problem 13floors
https://open.kattis.com/problems/13floors
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    if (N - 13 >= 0)
    {
        printf("%d\n", N + 1);
    }
    else
    {
        printf("%d\n", N);
    }
    return 0;
}