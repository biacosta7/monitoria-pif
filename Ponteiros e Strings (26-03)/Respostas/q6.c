// Buscar um número (int) em um array e retornar ponteiro para o elemento
#include <stdio.h>
#include <stdlib.h>

int* acharElemento(int *array, int tam, int numeroBusca) {
    for(int i = 0; i < tam; i++) {
        if (array[i] == numeroBusca) {
            return &array[i];
        }
    }
    return NULL;
}

int main() {
    int tam, numero;

    printf("Tamanho do array: ");
    scanf("%d", &tam);
    int arr[tam];

    printf("Elementos do array: ");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }

    printf("Número busca: ");
    scanf("%d", &numero);

    int *resultado = acharElemento(arr, tam, numero);
    
    if (resultado) {
        printf("Elemento encontrado no endereço: %p, valor: %d\n", resultado, *resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
