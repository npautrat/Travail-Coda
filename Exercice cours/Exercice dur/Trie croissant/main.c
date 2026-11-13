#include <stdlib.h>
#include "fonction.h"

int main()
{
    int numbers1[] = {5, -6, 29, 34, 0};
    int numbers2[] = {45, -128, 496, 11, -90};

	sort_numbers(numbers1, "asc");
	sort_numbers(numbers2, "desc");
	exit(0);
}