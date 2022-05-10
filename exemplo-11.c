#include <stdio.h>
int main(){
int opcao;
printf(
"[1] Cadastrar cliente\n" 
"[2] Login\n"
"[3] Sair\n"
"Digite sua escolha: "); 
scanf("%i", &opcao);
switch (opcao){
    case 1:
        printf("Cadastro de clientes \n"); // sem break fica errado!!!!
    case 2:
         printf("Login \n");
        //  break;
    case 3:
         printf("Sair \n");
         break;
    default:
        printf("Opção inválida!\n");
}
return 0; }