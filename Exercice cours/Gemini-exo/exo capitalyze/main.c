#include <stdio.h>

void capitalize_words(char *str);

int main()
{
    char test1[] = "hello world!";
    char test2[] = "la vie l'UNIVERS et tOuT le reste";

    capitalize_words(test1);
    capitalize_words(test2);

    printf("%s\n", test1); // Doit afficher : Hello World!
    printf("%s\n", test2); // Doit afficher : La Vie L'Univers Et Tout Le Reste

    return 0;
}