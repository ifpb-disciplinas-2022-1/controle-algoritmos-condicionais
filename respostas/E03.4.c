/*
Escreva um programa em linguagem C que leia cinco números reais, 
calcule e exiba quantos destes números lidos são maiores que 10.
Exemplo de saída: “Foram lidos 3 números maiores que 10”
*/

#include <stdio.h>
int main(){
    float n1, n2, n3, n4, n5;
    printf("Digite cinco números: ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
    int contador = 0;
    if(n1 > 10){
        contador = contador + 1;
    }
    if(n2 > 10){
        contador = contador + 1;
    }
    if(n3 > 10){
        contador = contador + 1;
    }
    if(n4 > 10){
        contador = contador + 1;
    }
    if(n5 > 10){
        contador = contador + 1;
    }
    printf("Foram lidos %i números maiores que 10\n", contador);
    return 0;
}