/*
6. Obter dois números quaisquer, e informar:
a) a soma destes números;
b) a subtração destes números;
c) a multiplicação destes números;


Entrada de dados:

	numero qualquer
	numero qualquer

Saída de dados:

	Soma dos numeros
	Subtração dos numeros
	Multiplicação dos numeros

Processamento:

   obter numero1
   obter numero2
   numero1 + numero2 = soma
   mostrar soma
   numero1 - numero2 = subt
   mostrar subt
   numero1 * numero2 = mult
   mostrar mult 
   */


#include <stdio.h>
#include <locale.h>

int main() {

    float numero1, numero2, soma, subt, mult;

    setlocale("LC_ALL", "Portuguese");

    printf("\nPrograma para calcular soma, subtração e multiplicação de dois numeros");
    printf("\nDigite um numero: ");
    scanf("%f", &numero1);
    printf("\nDigite outro numero: ");
    scanf("%f", &numero2);

    // SOMA

    soma = numero1 + numero2;
    printf("\nA soma dos dois numeros é: %0.0f", soma);

    // SUBTRAÇÃO

    subt = numero1 - numero2;
    printf("\nA subtração dos dois numeros é: %0.0f", subt);

    // MULTIPLICAÇÃO

    mult = numero1 * numero2;
    printf("\nA multiplicação dos dois numeros é: %0.0f \n", mult);


    system("pause");
    return 0;
}