/*
Escreva um programa em linguagem C que leia um número inteiro, 
verifique se ele é maior que 10, e em caso positivo, exiba “O valor digitado é maior que 10”.
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);

    if(numero > 10){
        printf("O valor digitado é maior que 10\n");
    }


    return 0;
}
