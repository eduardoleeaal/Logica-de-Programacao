/* 34. Calcular a quantidade de latas de tinta necessárias, e também o custo, para pintar um tanque
cilíndrico de combustível, em que são fornecidos a altura e o raio do mesmo, além do preço da lata de
tinta.
Sabe-se que:
a)cada lata contém 5 litros de tinta;
b)cada litro de tinta pinta 3 metros quadrados;

entrada de dados:
    altura do cilindro
    raio do cilindro
    valor de cada lata de tinta
saida de dados:
    quantidade de latas Usadas
    valor total das latas
processamento:
    obter a altura do cilindro
    obter o raio do cilindro
    calcular area do cilindro
        area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio
    obter valor de cada lata de tinta
    calcular a quantidade de tinta usada
        sabendo que 1 litro de tinta pinta 3 metros quadrados
            qntTintaUsado = area / 3
    calcular a quantidade de latas usadas
        sabendo que cada lata tem 5 litros de tinta
            qntLatasUsadas = qntTintaUsado / 5
    calcular o valor total das latas
        valorTotal = qntLatasUsadas * valorU
    mostrar a quantidade de latas usadas
    mostrar valor total
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    float area, valorU, altura, raio, qntTintaUsado, qntLatasUsadas, valorTotal;

    printf("\nDigite a altura do cilindro em metros: ");
    scanf("%f", &altura);

    printf("\nDigite o raio do cilindro em metros: ");
    scanf("%f", &raio);

    printf("\nDigite o valor de cada lata em R$: ");
    scanf("%f", &valorU);

    area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio;
    qntTintaUsado = area / 3;
    qntLatasUsadas = qntTintaUsado / 5;
    valorTotal = qntLatasUsadas * valorU;


    printf("\n\nA quantidade de latas usadas e de: %.2f Latas", qntLatasUsadas);
    printf("\nE o valor total e de: R$%0.2f \n", valorTotal);



    system("pause");
    return 0;
}