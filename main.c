#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char frase[] = "i topi non avevano nipoti";
    char *pfrase1 = &frase[0];
    char *pfrase2 = &frase[0];


    while (*pfrase2 != '\0') {
        pfrase2++;
    }
    pfrase2--;

    bool palindromo = true;

    while (*pfrase1 != '\0') {
        while (*pfrase1 == ' ') {
            pfrase1 ++;
        }
        while (*pfrase2 == ' ') {
            pfrase2--;
        }
        if (*pfrase1 != *pfrase2) {
            palindromo = false;
            break;
        }

        pfrase1++;
        pfrase2--;
    }

    if (palindromo) {
        printf("La frase e' palindroma\n");
    } else {
        printf("La frase NON e' palindromo\n");
    }

    return 0;
}