// Escreva uma função que ordene os caracteres de uma string em ordem alfabética sem usar qsort().
#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    
    printf("Entrada: ");
    char *entrada;
    scanf("%s", entrada);
    getchar();

    sortString(entrada);
    printf("%s\n", entrada);
    return 0;
}
