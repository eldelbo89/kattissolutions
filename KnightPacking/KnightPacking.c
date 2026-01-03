/*
KnightPacking.c
Kattis Solution for Kattis problem KnightPacking
https://open.kattis.com/problems/knightpacking
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
  int N;
  scanf("%d", &N);
  if (N % 2)
  {
    printf("first\n");
  }
  else
  {
    printf("second\n");
  }
  return 0;
}