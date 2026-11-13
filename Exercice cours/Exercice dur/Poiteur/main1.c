#include <stdio.h>
#include <stdlib.h>

void swap_values(int *p1, int *p2)
{
    printf("%p\n,%p\n",p1,p2);
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int val1 = 1;
    int val2 = 2;
    
    swap_values(&val1, &val2);
    
    printf("val1 = %d, val2 = %d\n", val1, val2); 
    
    return 0;
}