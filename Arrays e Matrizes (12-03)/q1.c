#include <stdio.h>


int VerificaPoder(int arr[],int tamanho, int poder){
    int count = 0;
    
    for(int i = 0; i < tamanho ; i++){
        if(poder >= arr[i]){
            count++;
        }
    }
    
    return count;
}


int main()
{
    int sungPoder = 20;
    int portal[] = {10, 20, 30, 40, 50, 60}; 
    int tamanho =  sizeof(portal) / sizeof(portal[0]);  


    int resultado = VerificaPoder(portal, tamanho, sungPoder);


    printf("%d\n", resultado);


    return 0;
}
