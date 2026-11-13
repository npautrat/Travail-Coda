#include <stdlib.h>
#include <stdio.h>

int add(int nb1, int nb2)
{
    int add=nb1+nb2;
    return(add);
}
int main()
{
	int result=add(1,2);
    printf("%d\n",result);
	exit(0);
}