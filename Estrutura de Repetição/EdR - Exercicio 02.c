/* 2) Calcular a média final obtida por um grupo de 22 alunos, para 4 notas bimestrais. */


#include <stdio.h>


int main(){
    // Declaração de variaveis
    int contador, vet;
    float nota1, nota2, nota3, nota4, media;
    // Titulo do programa
    printf("\nPrograma para calcular a media final de alunos\n\n");
    
    // Definindo o numero do aluno como 0 por padrão
    vet = 0;

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

        // Mostrar qual aluno é esse:
        vet++;
        printf("\nAluno No:%d\n\n\n", vet);


            // PRINTF PARA ORGANIZAÇÃO //
        printf("\n===================================================");
    }
    
    return 0;
}