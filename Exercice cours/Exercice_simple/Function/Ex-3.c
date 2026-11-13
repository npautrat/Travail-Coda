#include <stdlib.h>
#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3)
{
    double average = (nb1+nb2+nb3)/3;
    return(average);
}
int main()
{
	double average =compute_average(2,4,6);
    printf("%.2f\n",average);
	exit(0);
}

