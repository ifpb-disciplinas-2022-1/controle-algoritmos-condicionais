# Algoritmos - Estruturas Condicionais

Este projeto está estruturado com os assuntos relacionados às estruturas condicionais e os seus respectivos comendos na Linguagem de Programação C.

**Aulas**

*[Aula 1 - Operadores e if ](https://github.com/ifpb-disciplinas-2022-1/controle-algoritmos-condicionais/commit/c4c197855943eb5d53ab4c7a1c057f334c1185aa)*
<!-- 
*[Aula 2 - Ternário e switch-case ](https://github.com/ifpb-disciplinas-2022-1/controle-algoritmos-condicionais/commit/)*  -->


# Atividade prática

Na pasta [atividades](/atividades) temos a nossa terceira lista de exercício. Desenvolva, para cada item, um algoritmo correspondente.
Os arquivos devem ser compiláveis (sem problemas para compilar) e atenderem ao solicitado em cada questão.

Na pasta [respostas](/respostas) temos três respostas da nossa segunda lista de exercício. As questões a serem respondidas foram escolhidas pelos alunos em nossa turma no Slack. Para exemplificar, observe o código desenvolvido na Linguagem C para a questão `e03-4`.

```
#include <stdio.h> 
int main(){    
    float numero_um, numero_dois, numero_tres, numero_quatro, numero_cinco;
    int contador = 0;
    printf("Digite cinco números: \n");
    scanf("%f%f%f%f%f", &numero_um, &numero_dois, &numero_tres, &numero_quatro, &numero_cinco);
    if(numero_um > 10){
        // contador = contador + 1; // contador = 1 
        // contador += 1; // contador = 1 
        contador ++; // contador = 1 
    }     
    if(numero_dois > 10){
        contador = contador+1;
    }     
    if(numero_tres > 10){
        contador = contador+1;
    }    
    if(numero_quatro > 10){
        contador = contador+1;
    }    
    if(numero_cinco > 10){
        contador = contador+1; // contador = 2
    }
    printf("Foram lidos %d números maiores que 10 \n", contador);
    return 0;
}
```


## Metodologia

Esta atividade prática está planejada em um conjunto de algoritmos e para ser desenvolvida individualmente ou coletivamente. 
Cada aluno deve fazer o __fork__ deste projeto e implementar sua própria solução. 

Caso surja alguma dúvida no desenvolvimento, falar de imediato via [Slack](https://ifpb20221-algoritmos.slack.com/archives/C03EMK97YKS). 

> Lembrete: Não guardem dúvidas, elas são como as dívidas. Acumulam-se e nos prejudicam :)

### Compilação

Lembrem-se que após a criação do algotimos, o arquivo `.c` precisa ser compilado.

```
// main.c     -- Linguagem de programação C
// compilação -- compilador (sintaxe, léxico)
// main       -- executável
```

Seguimos os passos:

*1. compilar o código-fonte (gerar um arquivo executável)*

*2. executar o executável (gerado no passo 1)*

Passo 1: `gcc exemplo-01.c -o exemplo-01`.
Passo 2: `./exemplo-01`.