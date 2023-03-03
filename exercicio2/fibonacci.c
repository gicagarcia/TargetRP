#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont = 80;
    int fib[cont];
    fib[0] = 0;
    fib[1] = 1;
    int num;
    int flag = 0;

    int i;
    for (i = 2; i < cont; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("Informe o numero desejado: ");
    scanf("%d", &num);

    
    for (i = 0; i < cont; i++){
    if (num == fib[i]){
        printf("\nO numero esta entre os 80 primeiros da sequencia Fibonacci");
        flag = 1;
        }
    }
    

    if (flag == 0)
        printf("\nO numero nao esta na sequencia Fibonacci");
}