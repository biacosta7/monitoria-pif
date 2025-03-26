#include <stdio.h>
#include <string.h>

//Crie uma função que receba uma string e retorne o número de vogais (a, e, i, o, u) nela contidas.

int quantVogal(char *str){
    int count = 0;
    
    while(*str != '\0'){
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'){
            count++;
        }
        str++;
    }
    
    return count;
}

int main() {
    printf("Entrada: ");
    char *entrada;
    scanf("%s", entrada);
    getchar();
    printf("\nQuant vogais: %d\n", quantVogal(entrada));

    return 0;
}