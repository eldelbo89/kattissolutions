/*
FramtidarFIFA.c
Kattis Solution for Kattis problem FramtidarFIFA
https://open.kattis.com/problems/fifa
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    printf("%d\n", ((n / k) + 2022));

    return 0;
}