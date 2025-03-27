#include <stdio.h>

//Calcular a soma da diagonal secundária

int main() {
    int matriz[3][3];
    int count = 0;


    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
        scanf("%d", &matriz[i][j]);
      }
    }


    for(int i = 0; i < 3; i++) {
      count += matriz[i][2 - i];
    }


    printf("%d", count);


    return 0;
}

