/*
Escreva um programa em linguagem C que leia dois valores inteiros, 
calcule exiba as operações aritméticas
*/
#include <stdio.h>
int main(){
    int primeiro, segundo;
    printf("Digite o primeiro número: ");
    scanf("%i", &primeiro);
    printf("Digite o segundo número: ");
    scanf("%i", &segundo);

    printf("%i + %i = %i\n",primeiro, segundo, (primeiro + segundo));
    printf("%i - %i = %i\n",primeiro, segundo, (primeiro - segundo));
    printf("%i * %i = %i\n",primeiro, segundo, (primeiro * segundo));
    printf("%i / %i = %i\n",primeiro, segundo, (primeiro / segundo));
    printf("%i %% %i = %i\n",primeiro, segundo, (primeiro % segundo));
    return 0;
}
