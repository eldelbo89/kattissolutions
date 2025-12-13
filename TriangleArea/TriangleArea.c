/*
TriangleArea.c
Kattis Solution for Kattis problem TriangleArea
https://open.kattis.com/problems/triarea
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%f\n", (x * y) / 2.0);

    return 0;
}
