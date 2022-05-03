/*
Escreva um programa em linguagem C que leia um número inteiro e verifique se ele é par ou ímpar.
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    if(numero % 2 ==0){
        printf("Número par! \n");
    }else{
        printf("Número ímpar! \n");
    }
    return 0;
}