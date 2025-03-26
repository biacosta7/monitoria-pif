#include <stdio.h>
#include <string.h>

// Escreva uma função que verifique se uma string é um palíndromo (palavra que se lê da mesma forma da esquerda para a direita e da direita para a esquerda. Ex: arara).

int ehPalindromo(char *palavra){
    int len = strlen(palavra);
    
    for(int i = 0; i<len/2; i++){
        if(*(palavra + i) != *(palavra + (len-1) - i)){
            return 0;
        }
    }
    return 1;
}


int main() {
    printf("Entrada: ");
    char *entrada;
    scanf("%s", entrada);
    getchar();

    if (ehPalindromo(entrada)){
        printf("É palíndromo!\n");
    } else{
        printf("Não é palíndromo!\n");
    }

    return 0;
}