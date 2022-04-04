/*
4. Escreva um programa que calcule:
a) a área de um triângulo
b) a área de um círculo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular cada área, mostrando o resultado na tela.

entradas de dados:
    área de um triângulo:
        base, altura
    área de um círculo:
        raio
    área de um cubo:
        aresta
    área de um cilindro:
        raio, altura

saídas de dados:
    A a área de um triângulo
    A a área de um círculo
    A área de um cubo
    A área de um cilindro

processamento:
    obter a altura do triângulo
    obter a base do triângulo
    calcular a área do triângulo:
        area = base * altura / 2
    mostrar a área do triângulo
    
    obter o raio do círculo
    calcular a área do círculo:
        área = 3.14 * raio^2
    mostrar a área do círculo

    obter a aresta do cubo
    calcular a área do cubo
        área = aresta^2 *6
    mostrar a área do círculo

    obter o valor da altura do cilindro
    obtero valor do raio do cilindro
    calcular a área do cilindro
        área = 2 * 3.14 * raio^2 + altura * 2 * 3.14 * raio
    mostrar a área do cilindro
 */
#include <stdio.h>
#include <math.h>       // função pow(x,y) - potência
                        // constante M_PI - valor de PI
int main()
{
    float area, base, altura, raio, aresta;

    printf("\nPrograma para calcular areas de figuras geometricas ");

        //TRIANGULO
    printf("\nDigite o valor da altura do triangulo: ");
    scanf("%f", &altura);
    printf("\nDigite o valor da base do triangulo: ");
    scanf("%f", &base);
    area = base * altura / 2;
    printf("\nA area do triangulo é %f", area);

        //CIRCULO
    printf("\nDigite o raio do circulo: ");
    scanf("%f", &raio);
    area = M_PI * pow(raio, 2.0);
    printf("\nA area do circulo é %f", area);

        //CUBO
    printf("\nDigite o valor da aresta do cubo: ");
    scanf("%f", &aresta);
    area = pow(aresta, 2.0) * 6;
    printf("\nA area do cubo e %f", area);

        //CILINDRO
    printf("\nDigite o valor do raio do cilindro: ");
    scanf("%f", &raio);
    printf("\nDigite o valor da altura do cilindro: ");
    scanf("%f", &altura);
    area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio;
    printf("\nA area do cilindro e %f \n", area);

    system("pause");
    return 0;
}