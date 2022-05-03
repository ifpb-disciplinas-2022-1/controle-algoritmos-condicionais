/*
Escreva um programa em linguagem C que leia um número inteiro e
verifique se ele é maior que 10 E menor que 20
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);

    if(numero >10 && numero < 20){
        printf("Número maior que 10 E menor que 20\n");
    }
    return 0;
}