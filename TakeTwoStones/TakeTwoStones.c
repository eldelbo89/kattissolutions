/*
TakeTwoStones.c
Kattis Solution for Kattis problem TakeTwoStones
https://open.kattis.com/problems/twostones
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    if (N % 2)
    {
        printf("Alice\n");
    }
    else
    {
        printf("Bob\n");
    }
}
