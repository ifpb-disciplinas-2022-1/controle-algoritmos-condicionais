/*
Escreva um programa em linguagem C que leia um número inteiro e 
verifique (usando if aninhado) se ele é positivo, neutro ou negativo.
*/
#include <stdio.h>
int main(){
    int numero;
    scanf("%i", &numero);

    if(numero>0){
        printf('positivo\n');
    }else if(numero == 0){
        printf("neutro\n");
    }else{
        printf("negativo\n");
    }
    return 0;
}