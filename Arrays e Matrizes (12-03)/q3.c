#include <stdio.h>
int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) { // Lê os 5 números do usuário
        scanf("%d", &arr[i]);
    }
    printf("\n");


    for (int i = 4; i >= 0; i--) { // Imprime os números em ordem invertida
        printf("%d ", arr[i]);
    }


    return 0;
}
