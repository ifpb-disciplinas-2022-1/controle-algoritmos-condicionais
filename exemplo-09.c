/*
Escreva um programa em linguagem C que leia duas notas e 
determine se o aluno está aprovado, ou não. 
Considere a média maior que 7, aprovado; menor que 4, reprovado; 
e, maior que 4 e menor que 7, Final.
*/
#include <stdio.h>
int main(){
    int nota1, nota2;
    printf("Digite duas notas: ");
    scanf("%i %i", &nota1, &nota2);
    float media = (float) (nota1 + nota2) / 2; // (int + int) /2 -> cast
    // printf("%f\n", media);

    if(media >= 7){
        printf("aprovado\n");
    }else if(media < 4){
        printf("reprovado\n");
    }else{
        printf("final\n");
    }
    return 0;
}