/* 3. Calcular a média ponderada obtida por um aluno para 2 notas bimestrais.

Entrada de dados:

	notas dos bimestres
	peso dos bimestres

Saída de dados:

	média obtida por um aluno

Processamento:

   obter a nota1
   obter peso1
   obter a nota2
   obter peso2
   ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2) = media
   mostrar o resultado calculado 
   */

  #include <stdio.h>

int main(){
  float nota1, nota2, media;
  int peso1, peso2;

  printf("\nPrograma para calcular media ponderada de duas notas");
  printf("\nDigite a primeira nota:");
  scanf("%f",&nota1);
  printf("\n Digite o peso da primeira nota: ");
  scanf("%d", &peso1);
  printf("\nDigite a segunda nota: ");
  scanf("%f",&nota2);
  printf("\n Digite o peso da segunda nota: ");
  scanf("%d", &peso2);

  media = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);

      // "=" é comando de atribuição - resolve a expressão do seu lado direito
      //     e atribui o resultado na variavel a esquerda

  printf("\nA media e %0.1f \n", media);
      // %0.1f - indica que será mostrado na tela um numero com formatação
      // 0 - indica quantidade mínima de casas inteiras
      // 1 - indica a quantidade maxima de casas decimais


  system("pause");
  return 0;
}