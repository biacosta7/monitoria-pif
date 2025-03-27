#include <stdio.h>
int main() {
   int M, N;
   scanf("%d %d", &M, &N);
   int A[100][100];
   for (int i = 0; i < M; i++) {
       for (int j = 0; j < N; j++) {
           scanf("%d", &A[i][j]);
       }
   }
   int soma = 0;
   int i = 0, j = 0;
   while (i < M - 1 || j < N - 1) {
       soma += A[i][j];
       if (i < M - 1 && (j == N - 1 || A[i + 1][j] < A[i][j + 1])) i++;
       else j++;
   }
   soma += A[M - 1][N - 1];
   printf("%d\n", soma);
   return 0;
}
