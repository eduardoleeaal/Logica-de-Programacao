/* 2) Calcular a média final obtida por um grupo de 22 alunos, para 4 notas bimestrais. */


#include <stdio.h>
#include <stdlib.h> // rand -- srand
#include <time.h>   // comando de time

#define A_TOTAL 22
#define A_TOTAL2 23

int main(){
    // Declaração de variaveis
    int contador, vet, notaGeral[23], nVetor, contador2;
    float nota1, nota2, nota3, nota4, media, lNota;

    srand(time(NULL));


    // Titulo do programa
    printf("\nPrograma para calcular a media final de alunos\n\n");
    
    // Definindo o numero do aluno como 0 por padrão
    vet = 0;
    nVetor = 0;
    media = 0;
    for (contador = 1; contador <= A_TOTAL; contador++)
    {
        // Obter media final
        //printf("\nDigite sua nota referente ao primeiro bimestre: ");
        //scanf("%f", &nota1);
        //printf("\nDigite sua nota referente ao segundo bimestre: ");
        //scanf("%f", &nota2);
        //printf("\nDigite sua nota referente ao terceiro bimestre: ");
        //scanf("%f", &nota3);
        //printf("\nDigite sua nota referente ao quarto bimestre: ");
        //scanf("%f", &nota4);
        //Calcular e mostrar a média final
        //media = (nota1 + nota2+ nota3 + nota4) / 4;

            do{
            media = rand() / 1000;
            }while(media <= 10 && media > 1);
        
        
        notaGeral[nVetor] = media;

        nVetor++;


        printf("\nSua nota final e: %.1f\n\n\n", media); 

        // Mostrar qual aluno é esse:
        vet++;
        printf("\nAluno No:%d\n\n\n", vet);

            // PRINTF PARA ORGANIZAÇÃO //
        printf("\n===================================================\n");
    }
    // Resetando variaveis
    vet = 0;
    nVetor = 0;
    // Criando uma lista com todos os alunos e notas
    for (contador2 = 1; contador2 < A_TOTAL2; contador2++)
    {
        
        lNota = notaGeral[nVetor];
        nVetor++;
        vet++;
        printf("\nMedia do aluno %d: %.1f\n",vet, lNota);
    }
    
    return 0;
}