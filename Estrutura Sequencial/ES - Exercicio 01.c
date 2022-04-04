#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;                          // int - Variavel de Numeros Inteiros
    char nome[51];                      // string - Variavel de letras
                                        // armazena 50 caracteres
    
    printf("\nDigite seu nome: ");      // Comando de saída
                                        // Mostra o conteudo na tela
                                        // \n quebra uma linha (como se fosse o <p>)
    setbuf(stdin, NULL);                // Limpeza de Buffers de entrada
    gets(nome);                         // gets - Comando de entrada de dados de STRINGS

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);                // scanf - comando de entrada de dados formatada
    

    printf("\nHello! %s, voce tem %d anos! \n", nome, idade);

    return 0;
}