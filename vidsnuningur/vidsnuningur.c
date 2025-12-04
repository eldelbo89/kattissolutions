/*
vidsnuningur.c
Kattis solution of vidsnuningur
https://open.kattis.com/problems/vidsnuningur
Hossein Eldelbani
*/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int main()
{
    int i, length;
    char input[MAX_LENGTH];
    scanf("%s", input);
    length = strlen(input);

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", input[i]);
    }

    return 0;
}
