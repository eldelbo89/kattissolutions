/*
storafmaeli.c
Kattis solution of storafmaeli
https://open.kattis.com/problems/storafmaeli
Hossein Eldelbani
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 10)
    {
        printf("Neibb\n");
    }
    else
    {
        printf("Jebb\n");
    }

    return 0;
}
