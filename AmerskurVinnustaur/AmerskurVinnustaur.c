/*
AmerskurVinnustaur.c
Kattis Solution for Kattis problem AmerskurVinnustaur
https://open.kattis.com/problems/ameriskur
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
    int N;
    double field2km = 0.09144;
    scanf("%d", &N);
    printf("%f\n", N * field2km);
    return 0;
}