/*
flatbokuveisla.c
Kattis solution of flatbokuveisla
https://open.kattis.com/problems/flatbokuveisla
Hossein Eldelbani
*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", n % m);
}
