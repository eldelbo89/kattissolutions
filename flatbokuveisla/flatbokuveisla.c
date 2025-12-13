/*
flatbokuveisla.c
Kattis Solution for Kattis problem flatbokuveisla
https://open.kattis.com/problems/flatbokuveisla
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", n % m);
}
