#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i = 5;
    int* ptr=&i;
    printf("%p\n",&i);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    exit(0);
}