#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    FILE *a;
    char n[50]="";
    char p[50]="";
    printf("Rentre ton nom\n");
    scanf("%49s",n);
    printf("Rentre ton prénom\n");
    scanf("%49s",p);
    a=fopen("prout.txt","w");
    fprintf(a,"%s %s\n",p,n);
    return 0;
}