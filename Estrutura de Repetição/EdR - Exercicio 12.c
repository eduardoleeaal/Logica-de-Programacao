/* 12) Perguntar ao usuário se ele deseja calcular:
a) a área de um triângulo
b) a área de um círculo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela. O
programa deve continuar sendo executado enquanto o usuário não desejar finalizá-lo.
 */



#include <stdio.h>
#include <math.h>


int main(){

    float area, base, altura, raio, aresta;
    int figura, finalizar;

    do{
        printf("\n[1] Triangulo \n[2] Circulo \n[3] Cubo \n[4] Cilindro\n");
        printf("\nDigite o numero representante da figura que voce quer calcular: ");
        scanf("%d", &figura);


        if (figura == 1){
            printf("\n\nVoce escolheu calcular a area do triangulo!\n");
            printf("\nDigite o valor da altura do triangulo: ");
            scanf("%f", &altura);
            printf("\nDigite o valor da base do triangulo: ");
            scanf("%f", &base);
            area = base * altura / 2;
            printf("A area do triangulo e %0.2f\n", area);
        }
        else
            if (figura == 2){
                printf("\n\nVoce escolheu calcular a area do circulo!\n");
                printf("\nDigite o raio do circulo: ");
                scanf("%f", &raio);
                area = M_PI * pow(raio, 2.0);
                printf("\nA area do circulo e %0.2f\n", area);
            }
        else
            if (figura == 3){
                printf("\n\nVoce escolheu calcular a area do cubo!\n");
                printf("\nDigite o valor da aresta do cubo: ");
                scanf("%f", &aresta);
                area = pow(aresta, 2.0) * 6;
                printf("\nA area do cubo e %0.2f\n", area);
            }
        else
            if (figura == 4) {
                printf("\n\nVoce escolheu calcular a area do cilindro!\n");
                printf("\nDigite o valor da altura do cilindro: ");
                scanf("%f", &altura);
                printf("\nDigite o valor do raio do cilindro: ");
                scanf("%f", &raio);
                area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio;
                printf("\nA area do cilindro e %0.2f\n", area);
            }

        // PRINTF PARA ORGANIZAÇÃO //
    printf("\n=========================================\n");
    // Pergunta se deseja finalizar o programa ou não
    printf("\nSim --> [1] \nNao --> [2]\n");
    printf("\nVoce deseja finalizar o programa? ");
    scanf("%d", &finalizar);
    
} while (finalizar == 2);





    return 0;
}