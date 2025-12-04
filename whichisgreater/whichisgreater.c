/*
whichisgreater.c
Kattis solution of whichisgreater
https://open.kattis.com/problems/whichisgreater
Hossein Eldelbani
*/

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", A > B ? 1 : 0);

    return 0;
}
