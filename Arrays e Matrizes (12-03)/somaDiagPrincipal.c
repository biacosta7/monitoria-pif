#include "stdio.h"

//Calcular a soma da diagonal principal

int main() {
    int matriz[3][3];
    int count=0;
    for(int i=0; i<3; i++) {
      for(int j=0; j<3; j++) {
        scanf("%d", &matriz[i][j]);
          if(i==j) {
        count+=matriz[i][j];
          }
      }
    }
   
    printf("%d", count);


    return 0;
}