#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    printf("Choisissez un nombre entre 0 et 100\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        if (i % 5 == 0) {
            printf("i (%d) est un multiple de 5 !\n", i);
        }   
    }
    return 0;
}