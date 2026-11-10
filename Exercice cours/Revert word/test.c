#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char *mot="Hello World!";
    int len = strlen(mot);
    printf("%c",mot[len-1]);
}
