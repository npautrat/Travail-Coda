#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int get_biggest_number(int *numbers, int size)
{
    int i = 0 ;
    int biggest = numbers[0];
    while (i<size)
    {
        if (numbers[i]>biggest)
        {
            biggest = numbers[i];
        }
        i++;
    }
    return (biggest);
}

int get_smallest_number(int *numbers, int size)
{
    int i = 0 ;
    int smallest = numbers[0];
    while (i<size)
    {
        if (numbers[i]<smallest)
        {
            smallest = numbers[i];
        }
        i++;
    }
    return (smallest);
}

void free_int_tabs(int **numbers)
{
    int i = 0;

    while (numbers[i] != NULL)
    {
        free(numbers[i]);
        i = i + 1;
    }

    free(numbers);
}

void copy_numbers(int *source, int *numbers, int length)
{
    int i = 0;

    while (i < length)
    {
        numbers[i] = source[i];
        i = i + 1;
    }
}