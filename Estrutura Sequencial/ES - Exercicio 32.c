/*
32. Ler um número inteiro representando a quantidade de alunos de uma turma e informe a
quantidade de grupos de 4 alunos que podem ser formados, e quantos alunos ficam de fora, sem formar
um grupo completo.

entrada de dados:
    quantidade de alunos (numero inteiro)
saida de dados:
    quantidade de grupos de 4 alunos
    quantidade de alunos que ficam sem grupo
processamento
    obter quantidade total de alunos
    calcular quantidade / 4 = grupos
    calcular quantidade % 4 = sobra
    mostrar quantos grupos formados
    mostrar quantos alunos sobram

 */

#include <stdio.h>

int main (){

    int quant, grupos, sobra;

    printf("\nDigite a quantidade total de alunos: ");
    scanf("%d", &quant);

    grupos = quant / 4;
    sobra = quant % 4;

    printf("\nA quantidade total de alunos e: %d.\nForam formados %d grupos. \nUm total de %d alunos ficaram sem grupo \n", quant, grupos, sobra);

    system ("pause");
    return 0;
}