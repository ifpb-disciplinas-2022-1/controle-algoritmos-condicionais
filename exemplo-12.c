/*
Escreva um programa em linguagem C leia um número e exiba o dia correspondente 
da semana (1 para domingo, 2 para segunda, etc.), 
se digitar outro valor deve aparecer valor inválido.
Exemplo de saída: Caso seja informado o valor “6”. 
Logo, a mensagem de saída seria: “Sexta”
*/

#include <stdio.h>
int main(){
    int dia;
    printf("Digite o dia da semana: ");
    scanf("%i", &dia);
    switch(dia){
        case 1: 
            printf("domingo\n");
            break;
        case 2: printf("segunda-feira\n");break;
        case 3: printf("terça-feira\n");break;
        case 4: printf("quarta-feira\n");break;
        case 5: printf("quinta-feira\n");break;
        case 6: printf("sexta-feira\n");break;
        case 7: printf("sábado\n");break;
        default: printf("opção inexistente\n");
    }
    return 0;
}