/*
StuckInATimeLoop.c
Kattis Solution for Kattis problem StuckInATimeLoop
https://open.kattis.com/problems/timeloop
Author: Hossein Eldelbani
*/

#include <stdio.h>
int main(void)
{
  int x;
  scanf("%d", &x);
  for (int i = 1; i <= x; i++)
    printf("%d Abracadabra\n", i);

  return 0;
}
