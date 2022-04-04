/*
1) Obter o nome e a idade de um usuário e escrever na tela a seguinte mensagem: Hello! FULANO, você
tem XX anos, para um grupo de 10 pessoas.
*/

#include <stdio.h>


int main(){

    int Contador, Idade;
    char Nome[51];

 
    for (Contador = 1; Contador <= 10; Contador++)
    {
        printf("\nDigite aqui seu nome: ");
        gets(Nome);
        printf("\nDigite aqui sua idade: ");
        scanf("%d", &Idade);
        printf("\nHello! %s, voce tem %d anos\n\n", Nome, Idade);

        setbuf(stdin, NULL);
    }


    return 0;
}