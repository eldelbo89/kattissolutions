/*
CosmicPathOptimization.c
Kattis Solution for Kattis problem CosmicPathOptimization
https://open.kattis.com/problems/cosmicpathoptimization
Author: Hossein Eldelbani
*/

#include <stdio.h>

int main(void)
{
  int M, total = 0;

  scanf("%d ", &M);
  for (int i = 0; i < M; i++)
  {
    int tmp;
    scanf("%d", &tmp);
    total += tmp;
  }

  printf("%d\n", total / M);

  return 0;
}