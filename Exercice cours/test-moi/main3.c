#include <stdlib.h>
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 1000; ++i)
        for (int j = i; j <= 1000; ++j)
            if (i * j == 1000) 
                printf ("%d * %d = 1000 \n", i, j);

    return 0;
}
