#include <stdlib.h>
#include <stdio.h>
int main()
{
    printf("Bonjour, quel est votre prénom ?\n");
    char str[50];
    scanf("%49s", str);
    printf("Bonjour %s, quel est votre âge ?\n",str);
    int age;
    scanf("%d", &age);
    printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n",str,2025-age,2026-age);
    exit(0);
}