#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i;
    int k =0;
    char j;
    printf("Saisissez un nombre\n");
    scanf("%d",&i);
    printf("Saisissez un signe + ou -\n");
    scanf(" %c",&j);
    if (j=='+')
    {
        while(k<i+1)
        {
        printf("%d\n",k);    
        k++;
        }
    }
    if (j=='-')
    {
        while(i>-1)
        {
        printf("%d\n",i);    
        i--;
        }
    }
    exit(0);
}





