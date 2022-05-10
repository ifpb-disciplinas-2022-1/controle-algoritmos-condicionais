/*
Escreva um programa em linguagem C que leia um número inteiro e 
verifique se ele é positivo ou negativo (ou neutro).
*/
#include <stdio.h>
int main(){
    int numero;
    scanf("%i", &numero);

    if(numero > 0){
        printf("Positivo\n");
    }else{
        printf("Negativo (ou neutro)\n");
    }
    return 0;
}