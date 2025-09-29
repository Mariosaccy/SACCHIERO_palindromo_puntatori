#include <stdio.h>

int main(void) {
    char frase[] = "i topi non avevano nipoti";
    char *pfrase1 = &frase[0];
    char *pfrase2 = &frase[0];


    while (*pfrase2 != '\0') {
        pfrase2++;
    }
    pfrase2--;

    while (pfrase1 > pfrase2) {
        while (*pfrase1 == ' ') {
            pfrase1 ++;
        }
        while (*pfrase2 == ' ') {
            pfrase2--;
        }
        if (*pfrase1 != *pfrase2) {
            printf("La frase NON e' palindromo\n");
            return 0;
        }

        pfrase1++;
        pfrase2--;
    }

    printf("La frase e' palindroma\n");

    return 0;
}