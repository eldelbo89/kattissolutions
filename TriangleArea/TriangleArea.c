/*
TriangleArea.c
Kattis solution of TriangleArea
https://open.kattis.com/problems/triarea
Hossein Eldelbani
*/

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%f\n", (x * y) / 2.0);

    return 0;
}
