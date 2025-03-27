#include <stdio.h>
int main() {
   int Q;
   scanf("%d", &Q);
   int matriz[Q][Q];
   int soma_primeira_linha = 0, soma_ultima_coluna = 0;
   int soma_diagonal_principal = 0, soma_total = 0;
   for (int i = 0; i < Q; i++) {
       for (int j = 0; j < Q; j++) {
           scanf("%d", &matriz[i][j]);


           // Soma total
           soma_total += matriz[i][j];


           // Soma da primeira linha
           if (i == 0) {
               soma_primeira_linha += matriz[i][j];
           }


           // Soma da última coluna
           if (j == Q - 1) {
               soma_ultima_coluna += matriz[i][j];
           }


           // Soma da diagonal principal
           if (i == j) {
               soma_diagonal_principal += matriz[i][j];
           }
       }
   }


   printf("%d\n", soma_primeira_linha);
   printf("%d\n", soma_ultima_coluna);
   printf("%d\n", soma_diagonal_principal);
   printf("%d\n", soma_total);


   return 0;
}
