#include <stdlib.h>
#include <stdio.h>
int main()
{
    char greetings[] = "Hello";
    printf("%c", greetings[0]);
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";
    printf("%zu\n", sizeof(greetings));
    printf("%zu\n", sizeof(greetings2));
    char carName[] = "Volvo";
    int i;
    for (i = 0; i < 5; ++i) {
        printf("%c\n", carName[i]);
    }
    char carName[] = "Volvo";
    int length = strlen(carName);
    int i;
    for (i = 0; i < length; ++i) {
        printf("%c\n", carName[i]);
    }
}