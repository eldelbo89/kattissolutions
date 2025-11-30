/*
millifaersla.c
Kattis solution of millifaersla
https://open.kattis.com/problems/millifaersla
Hossein Eldelbani
*/

#include <stdio.h>
int main()
{
    int i, index = 0, a, minimum = 1000000000;
    const char services[3][18] = {
        "Monnei", "Fjee", "Dolladollabilljoll"};
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        if (a < minimum)
        {
            minimum = a;
            index = i;
        }
    }
    printf("%s", services[index]);
    return 0;
}
