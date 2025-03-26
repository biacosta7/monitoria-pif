#include <stdio.h>
#include <string.h>


void comprimir(char *str1, char *str2)
{
    int i = 0;
    int k = 0;
    int j = i+1;
    int cont = 1;
    int tamanho = strlen(str1);


    while(str1[i] != '\0')
    {
        if (str1[j] == str1[j-1] && j < tamanho)
        {
            cont++;
            j++;
        }
       
        else
        {
            str2[k] = str1[i];
            str2[k+1] = (char) (cont + 48);
            k+= 2;
            cont = 1;


            i = j;
            j = i+1;
        }
    }


    str2[k] = '\0';


    printf("%s", str2);
}




int main()
{
    char str2[1000];
    comprimir("AAAAAA", str2);


return 0;
}

