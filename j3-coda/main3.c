#include <stdlib.h>
#include <stdio.h>
int main()
{
    int k=0;
    char i[50];
    printf("Choisis un mot\n");
    scanf("%s",i);
    
    do
    {
        k++;
        printf("%s\n",i);
    }while(k<4);
    exit(0);
}