/*
99problems.c
Kattis solution of 99problems
https://open.kattis.com/problems/99problems
Hossein Eldelbani
*/

#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    if (n < 100)
    {
        printf("99\n");
        return 0;
    }
    int x = (n - (n % 100)) + 99;
    if (x - n > 50)
    {
        x -= 100;
    }
    printf("%d\n", x);

    return 0;
}
