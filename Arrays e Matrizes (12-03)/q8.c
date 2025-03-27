#include <stdio.h>


void multiplicarMatriz(int l1, int c1, int l2, int c2, int mA[l1][c1], int mB[l2][c2], int mC[l1][c2]) {
   
    for (int i = 0; i < l1; i++) {
       
        for (int j = 0; j < c2; j++) {
           
            for (int k = 0; k < c2 ; k++) { // pode ser k < c1 OU k < l2
               
                mC[i][j] += mA[i][k] * mB[k][j];
            }
           
        }
       
    }
}


int main() {
    // Write C code here
    int mA [3][2] = {{1,2}, {4,5}, {6,5}};
    int mB [2][4] = {{1,2,3,4}, {5,6,7,8}};




    int mC [3][4] = {0};


    multiplicarMatriz(3, 2, 2, 4, mA, mB, mC);


    for (int i = 0; i < 3; i++) { //printar matriz resultante
        for (int j = 0; j < 4; j++) {
            printf("%d ", mC[i][j]);
        }
        printf("\n");
    }




    return 0;
}
