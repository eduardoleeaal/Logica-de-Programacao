/* 2) Calcular a média final obtida por um grupo de 22 alunos, para 4 notas bimestrais. */


#include <stdio.h>
#include <stdlib.h>

int main(){
    // ESTETICA //
    system("color 02");
    // Declaração de variaveis
    int contador, vet, notaGeral[4], nVetor, contador2;
    float nota1, nota2, nota3, nota4, media, lNota;
    // Titulo do programa
    printf("\nPrograma para calcular a media final de alunos\n\n");
    
    // Definindo o numero do aluno como 0 por padrão
    vet = 0;
    nVetor = 0;
    for (contador = 1; contador <= 3; contador++)
    {
        // Obter media final
        printf("\nDigite sua nota referente ao primeiro bimestre: ");
        scanf("%f", &nota1);
        printf("\nDigite sua nota referente ao segundo bimestre: ");
        scanf("%f", &nota2);
        printf("\nDigite sua nota referente ao terceiro bimestre: ");
        scanf("%f", &nota3);
        printf("\nDigite sua nota referente ao quarto bimestre: ");
        scanf("%f", &nota4);
        //Calcular e mostrar a média final
        media = (nota1 + nota2+ nota3 + nota4) / 4;

        notaGeral[nVetor] = media;

        nVetor++;


        printf("\nSua nota final e: %.1f\n\n\n", media); 

        // Mostrar se ele reprovou ou não
            if (media >= 7){
                printf("\nVoce foi aprovado!!");
            }
                else{
                    printf("\nVoce reprovou.");
                }

        // Mostrar qual aluno é esse:
        vet++;
        printf("\nAluno No:%d\n\n\n", vet);

                // PRINTF PARA ORGANIZAÇÃO //
        printf("\n===================================================\n");
    }
    // Resetando variaveis
    vet = 0;
    nVetor = 0;
    // Criando uma lista com todos os alunos e notas e aprovados
    for (contador2 = 1; contador2 < 4; contador2++)
    {
        
        lNota = notaGeral[nVetor];
        nVetor++;
        vet++;
        if(lNota >= 7){
        printf("\nMedia do aluno %d: %.1f   -   Aprovado\n",vet, lNota);
        }
            else{
                printf("\nMedia do aluno %d: %.1f   -   Reprovado\n",vet, lNota);
            }
    }


    return 0;
}