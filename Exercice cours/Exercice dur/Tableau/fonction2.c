#include <stdio.h>
#include <stdlib.h>

int str_len(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int str_cmp(const char *str1, const char *str2)
{
    int a = str_len(str1);
    int b = str_len(str2);

    if (a != b)
    {
        return 0;
    }

    for (int i = 0; i < a; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str1[] = "Hello World";
    char str2[] = "Hello World";

    int result = str_cmp(str1, str2);
    printf("%d\n", result);

    exit(0);
}