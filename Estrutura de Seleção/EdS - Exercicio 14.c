/* 
14) Elabore um programa que recebe a idade de um nadador. O programa deve classificar o nadador em
uma das categorias a seguir:
a) Infantil A = de 5 a 7 anos
b) Infantil B = de 8 a 10 anos
c) Juvenil A = de 11 a 13 anos
d) Juvenil B = de 14 a 17 anos
e) Sênior = maiores de 18 anos
*/

#include<stdio.h>
#include <stdlib.h>


int main (){

    int idade;

    do
    {
        printf("\nDigite sua idade: ");
        scanf("%d", &idade);
    }
    while(idade < 5);
    
    if ((idade >= 5)&&(idade <= 7)){
        printf("\nVoce e um nadador Infantil A\n");
}
    else
        if ((idade >= 8)&&(idade <= 10)){
            printf("\nVoce e um nadador Infantil B\n");
}
    else
        if ((idade >= 11)&&(idade <= 13)){
            printf("\nVoce e um nadador Juvenil A\n");
}
    else
        if ((idade >= 14)&&(idade <= 17)){
            printf("\nVoce e um nadador Juvenil B\n");
}
    else
        if(idade > 18){
            printf("\nVoce e um nadador Senior\n");
}
    else{
        printf("\nVoce digitou uma idade incorreta!\n");
}




    system("pause");
    return 0;
}