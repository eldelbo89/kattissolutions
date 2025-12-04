/*
StuckInATimeLoop.c
Kattis solution of StuckInATimeLoop
https://open.kattis.com/problems/timeloop
Hossein Eldelbani
*/

#include <stdio.h>
int main()
{
  int x;
  scanf("%d", &x);
  for (int i = 1; i <= x; i++)
    printf("%d Abracadabra\n", i);

  return 0;
}
