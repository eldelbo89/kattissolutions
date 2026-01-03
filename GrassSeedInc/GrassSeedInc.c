/*
GrassSeedInc.c
Kattis Solution for Kattis problem GrassSeedInc
https://open.kattis.com/problems/grassseed
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{

    float C;
    int L;
    float total = 0;

    scanf("%f %d", &C, &L);
    for (int i = 0; i < L; i++)
    {
        float w, l;
        scanf("%f %f", &w, &l);
        total += w * l;
    }
    printf("%.7f\n", total * C);

    return 0;
}
