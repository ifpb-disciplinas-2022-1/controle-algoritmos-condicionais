/*
Escreva um programa em linguagem C que leia um número inteiro e 
verifique se ele é positivo, neutro ou negativo.
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    if(numero > 0){
        printf("Número positivo!\n");
    }
    if(numero < 0){
        printf("Número negativo!\n");
    }
    if(numero == 0){
        printf("Número neutro!\n");
    }

    return 0;
}