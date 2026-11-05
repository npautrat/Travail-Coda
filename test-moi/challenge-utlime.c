#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char guests[4][20] = {"Liam", "Anja", "Jenny", "Olivia"};
    char name[] = "Jenny";
    int found = 0;
    int i;

    for (i = 0; i < 4; i++) {
        if (strcmp(guests[i], name) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%s is on the guest list\n", name);
    } else {
        printf("%s is not on the guest list\n", name);
    }
}