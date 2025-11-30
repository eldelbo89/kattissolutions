/*
ovissa.c
Kattis solution of ovissa
https://open.kattis.com/problems/ovissa
Hossein Eldelbani
*/

#include <stdio.h>

int main()
{
    char in[100000];
    scanf("%s", in);
    int i = 0;
    while (in[i] != '\0')
        i++;
    printf("%d\n", i);
    return 0;
}