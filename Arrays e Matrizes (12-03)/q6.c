#include <stdio.h>
int ehSimetrica(int N, int matriz[N][N]){
   for(int i=0; i<N; i++){
       for(int j=0; j<N; j++){
           if(matriz[i][j] != matriz[j][i]){
               return 0; //false
           }
       }
   }
   return 1; //true
}


int main() {
   int N;
  
   scanf("%d", &N);
  
   int matriz[N][N];   
  
   for(int i=0; i<N; i++){
       for(int j=0; j<N; j++){
           scanf("%d", &matriz[i][j]);
      
       }
   }
  
   if(ehSimetrica(N, matriz)){
       printf("SIM");
   } else{
       printf("NAO");
   }
      
   return 0;
}
