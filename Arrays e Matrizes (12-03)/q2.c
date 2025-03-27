int main() {
    int array[10];
    int numero;
    int repeticoes = 0;


    for (int i = 0; i < 10; i++) { // pegando os 10 números inteiros
        scanf("%d", &array[i]);
    }


    printf("\nQual número você quer verificar: ");
    scanf("%d", &numero);


    for (int i = 0; i < 10; i++) {
        if (array[i] == numero) {
            repeticoes++;
        }
    }


    if (repeticoes > 0) {
        printf("\nO número %d aparece %d vezes no array!\n", numero, repeticoes);
    } else {
        printf("\nO número %d não está no array!\n", numero);
    }


    return 0;
}

