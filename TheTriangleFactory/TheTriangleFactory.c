/*
TheTriangleFactory.c
Kattis solution of TheTriangleFactory
https://open.kattis.com/problems/triangelfabriken
Hossein Eldelbani
*/

#include <stdio.h>

int main()
{
    int status = 0;
    char *output[] = {"Trubbig", "Ratvinklig", "Spetsig"}; //>90 ==90 <90
    for (int i = 0; i < 3; i++)
    {
        int a;
        scanf("%d", &a);
        if (a > 90)
        {
            status = 1;
        }
        else if (a == 90)
        {
            status = 2;
        }
        else if (!status)
        {
            status = 3;
        }
    }
    printf("%s Triangel\n", output[status - 1]);

    return 0;
}
