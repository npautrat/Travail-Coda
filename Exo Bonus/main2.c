#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
    int n=0;
    int j=1;
    while (n<2 || n>20)
    {
        printf("Choisissez un nombre entre 2 et 20\n");
        scanf("%d",&n);
        if (n<2 || n>20)
        {
            printf("Stp fait un effort\n");
        }
    }
    for (int i=n;i>=1;i--)
    {
        j=j*i;
    }
    printf("%d!=%d\n",n,j);
    return 0;
}