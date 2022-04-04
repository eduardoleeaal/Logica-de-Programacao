/* 7) Refazer o exercício nº 02, acrescentando uma mensagem de aprovado para média final maior ou
igual a 7, e reprovado em caso contrário */


#include <stdio.h>


int main(){

    // Declaração de variaveis
    int contador, alun;
    float nota1, nota2, nota3, nota4, media;
    // Titulo do programa
    printf("\nPrograma para calcular a media final de alunos\n\n");
    
    // Definindo o numero do aluno como 0 por padrão
    alun = 0;

    for (contador = 1; contador <= 22; contador++)
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

        printf("\nSua nota final e: %.1f\n\n\n", media); 
        // Mostrar se ele reprovou ou não
        if(media >= 7){
            printf("\nVoce foi aprovado!\n");
        }
            else{
                printf("\nVoce reprovou.\n");
            }

        // Mostrar qual aluno é esse:
        alun++;
        printf("\nAluno No:%d", alun);

            // PRINTF PARA ORGANIZAÇÃO //
        printf("\n===================================================\n");
    }





    return 0;
}