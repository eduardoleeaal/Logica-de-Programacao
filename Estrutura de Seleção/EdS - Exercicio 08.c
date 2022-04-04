/* 
08) Perguntar ao usuário se ele deseja calcular:
a) a área de um triângulo
b) a área de um círculo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.

entrada de dados:
    area das figuras
    base das figuras
    altura das figuras
    raio das figuras
    aresta das figuras
saida de dados:
    A área de um triângulo
    A área de um círculo
    A área de um cubo
    A área de um cilindro
processamento:
    obter qual tipo de figura calcular
        SE figura == 1
            obter altura do triangulo
            obter base do triangulo
            calcular area
                area = base * altura / 2
            mostrar area
        SE figura == 2
            obter raio do circulo
            calcular area
                area = M_PI * pow(raio, 2.0)
            mostrar area
        SE figura == 3
            obter aresta do cubo
            calcular area
                area = pow(aresta, 2.0) * 6
            mostrar area
        SE figura == 4
            obter altura do cilindro
            obter raio do cilindro
            calcular area
                area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio
            mostrar area
        SENÃO
            mostrar Você digitou um numero que não corresponde a nenhuma figura
*/

#include <stdio.h>
#include <math.h>


int main (){

    float area, base, altura, raio, aresta;
    int figura;


    printf("\n[1] Triangulo \n[2] Circulo \n[3] Cubo \n[4] Cilindro\n");
    printf("\nDigite o numero representante da figura que voce quer calcular: ");
    scanf("%d", &figura);



    if (figura == 1){
        printf("\nVoce escolheu calcular a area do triangulo!");
        printf("\nDigite o valor da altura do triangulo: ");
        scanf("%f", &altura);
        printf("\nDigite o valor da base do triangulo: ");
        scanf("%f", &base);
        area = base * altura / 2;
        printf("A area do triangulo e %0.2f\n", area);
}
    else
        if (figura == 2){
            printf("\nVoce escolheu calcular a area do circulo!");
            printf("\nDigite o raio do circulo: ");
            scanf("%f", &raio);
            area = M_PI * pow(raio, 2.0);
            printf("\nA area do circulo e %0.2f\n", area);
}
    else
        if (figura == 3){
            printf("\nVoce escolheu calcular a area do cubo!");
            printf("\nDigite o valor da aresta do cubo: ");
            scanf("%f", &aresta);
            area = pow(aresta, 2.0) * 6;
            printf("\nA area do cubo e %0.2f\n", area);
}
    else
        if (figura == 4) {
            printf("\nVoce escolheu calcular a area do cilindro!");
            printf("\nDigite o valor da altura do cilindro: ");
            scanf("%f", &altura);
            printf("\nDigite o valor do raio do cilindro: ");
            scanf("%f", &raio);
            area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio;
            printf("\nA area do cilindro e %0.2f\n", area);
}
    else{
        printf("\nVoce acabou digitando um numero que nao corresponde a nenhuma figura\n");
        printf("Tente novamente. \n");
}

    system("pause");
    return 0;
}