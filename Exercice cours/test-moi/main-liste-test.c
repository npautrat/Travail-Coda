#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i;
    int list[]={10,20,30,40};
    int longueur=sizeof(list)/sizeof(list[0]);
    printf("%d\n",longueur);
    for (i=0; i<4; i++) {
        printf("%d\n", list[i]);
    }
}