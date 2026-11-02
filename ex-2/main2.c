#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number = 42;
	printf("%d\n", number);
	double dec_number = 42.42;
	printf("%.2f\n", dec_number);
	char star = '*';
	char star2 = 42;
	printf("%c\n%c\n", star,star2);
	char * answer = "Hello World!";
	printf("%s\n", answer);
	exit(0);
}