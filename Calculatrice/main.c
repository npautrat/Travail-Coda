#include <stdlib.h>
#include <stdio.h>
int main()
{
    printf("Choisissez une opération parmis +, -, *, /, %%:\n");
    char i;
    int j;
    int k;
    double n;
    scanf("%c", &i);
    printf("Choisissez vos nombres: \n");
    scanf("%d",&j);
    scanf("%d",&k);
    if (i=='+')
    {
        n=j+k;
        printf("Votre opération:\n-> %d + %d = %.2f\n", j, k, n);
    }
    else if (i=='-')
    {
        n=j-k;
        printf("Votre opération:\n-> %d - %d = %.2f\n", j, k, n);
    }
    else if (i=='/')
    {
        n=(double)j/k;
        printf("Votre opération:\n-> %d / %d = %.2f\n", j, k, n);
    }
    else if (i=='*')
    {
        n=j*k;
        printf("Votre opération:\n-> %d * %d = %.2f\n", j, k, n);
    }
    else 
    {
        n=j%k;
        printf("Votre opération:\n-> %d %% %d = %.2f\n", j, k, n);
    }
    exit(0);
}