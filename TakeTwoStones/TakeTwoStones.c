/*
TakeTwoStones.c
Kattis solution of TakeTwoStones
https://open.kattis.com/problems/twostones
Hossein Eldelbani
*/

#include <stdio.h>

int main()
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
