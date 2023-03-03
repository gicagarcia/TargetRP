#include <stdio.h>
#include <stdlib.h>

int main(){
    int indice = 13;
    int k, soma = 0;

    while (k < indice){
        k = k + 1;
        soma = soma + k;
    };

    printf("O valor da soma sera: %d", soma);
}