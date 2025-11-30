/*
takkar.c
Kattis solution of takkar
https://open.kattis.com/problems/takkar
Hossein Eldelbani
*/

#include <stdio.h>
#define TRUMP "MAGA!"
#define KIM "FAKE NEWS!"
#define WAR "WORLD WAR 3!"
void main()
{
  int trump, kim;
  scanf("%d %d", &trump, &kim);
  if (trump > kim)
    printf("%s\n", TRUMP);
  else if (kim > trump)
    printf("%s\n", KIM);
  else
    printf("%s\n", WAR);
}
