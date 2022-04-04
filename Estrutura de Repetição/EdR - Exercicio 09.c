/* 9) Refazer o exercício nº 01, obtendo o sexo do usuário (masculino ou feminino), e alterar a mensagem
para:
Hello! Sr. Fulano, você ainda não atingiu a maioridade!
ou
Hello! Sra. Ciclana, você ainda não atingiu a maioridade! */


#include <stdio.h>


int main(){

    int contador, idade, gen;
    char nome[51];

 
    for (contador = 1; contador <= 10; contador++)
    {
        printf("\nDigite seu nome: ");
        gets(nome);
        printf("\nDigite sua idade: ");
        scanf("%d", &idade);
        printf("\nMasculino --> [1]\nFeminino  --> [2]\n");
        printf("\nQual seu sexo: ");
        scanf("%d", &gen);
        if((idade >= 18) && (gen == 1)){
            printf("\nHello! Sr. %s, voce ja atingiu a maioridade!\n\n", nome);
        }
            else
                if((idade >= 18) && (gen == 2)){
                    printf("\nHello! Sra. %s, voce ja atingiu a maioridade!\n\n", nome);
                }
                else
                    if((idade < 18) && (gen == 1)){
                        printf("\nHello! Sr. %s, voce ainda nao atingiu a maioridade!\n\n", nome);
                    }
                    else
                        if((idade < 18) && (gen == 2)){
                            printf("\nHello! Sra. %s, voce ainda nao atingiu a maioridade!\n\n", nome);
                        }

        setbuf(stdin, NULL);
    }

    return 0;
}