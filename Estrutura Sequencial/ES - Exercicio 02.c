/*2. Calcular a média final obtida por um aluno, para 4 notas bimestrais.

Entrada de Dados:

	Notas dos bimestres

Saída de dados:

	Média final


Processamento:

   obter as nota1
   obter as nota2
   obter as nota3
   obter as nota4
   (nota1 + nota2 + nota3 + nota4) / 4 = media final
   mostrar resultado */
#include <stdio.h>

int main () {

    float nota1, nota2, nota3, nota4, media;

    printf("\nPrograma para calcular media final ");
    printf("\nDigite sua Nota do PRIMEIRO bimestre: "); 
    scanf("%f", &nota1);
    printf("\nDigite sua Nota do SEGUNDO bimestre: ");
    scanf("%f", &nota2);
    printf("\nDigite sua Nota do TERCEIRO bimestre: ");
    scanf("%f", &nota3);
    printf("\nDigite sua Nota do QUARTO bimestre: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nSua Media Anual e: %f \n", media);

    system("pause");
    return 0;
}