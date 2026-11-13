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

char *str_rev(char *str)
{
    if (str == NULL)
        return NULL;

    int start = 0;
    int end = str_len(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    return str;
}

int main()
{
    char str[] = "Hello World";

    str_rev(str);
    printf("%s\n", str);

    exit(0);
}