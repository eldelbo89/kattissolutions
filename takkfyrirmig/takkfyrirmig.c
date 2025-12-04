/*
takkfyrirmig.c
Kattis solution of takkfyrirmig
https://open.kattis.com/problems/takkfyrirmig
Hossein Eldelbani
*/

#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);

    for (int counter = 0; counter < i; counter++) {
        char name[256];
        scanf("%s", name);
        printf("Takk %s\n", name);
    }

    return 0;
}
