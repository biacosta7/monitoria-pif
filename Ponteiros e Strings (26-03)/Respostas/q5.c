#include <stdio.h>

void acharMinMax(int *arr, int tam, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < tam; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max){
            *max = arr[i];
        } 
    }
}

int main() {
    int min, max, tam; 

    printf("Tamanho do array: ");
    scanf("%d", &tam);
    int arr[tam];

    printf("Elementos do array: ");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }

    acharMinMax(arr, tam, &min, &max);

    printf("Min: %d, Max: %d\n", min, max);

    return 0;
}
