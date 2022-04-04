/*5. Calcular a velocidade média para um veículo que percorre uma distância X em um tempo Y.

Entrada de dados:

	Distancia percorrida
	Tempo usado

Saída de dados:

	Velocidade média

Processamento:

   obter distancia percorrida
   obter tempo usado
   velociadeMedia = distanciaP / tempoU
   mostrar velociadeMedia 
   */

#include <stdio.h>
#include <locale.h>

int main (){

  setlocale("LC_ALL", "");

  float distanciaP, tempoU, velocidadeM;

  printf("\nPrograma para calcular velocidade media de um veiculo que vai do ponto X em um tempo Y");
  printf("\nDigite a distancia percorrida em KM: ");
  scanf("%f", &distanciaP);
  printf("\nDigite o tempo gasto em horas: ");
  scanf("%f", &tempoU);

  velocidadeM = distanciaP / tempoU;

  printf("\nA sua velocidade média é de: %0.0fKm/h \n", velocidadeM);

  system("pause");
  return 0;
}