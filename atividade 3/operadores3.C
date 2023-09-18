#include<stdio.h>

main(){

    // Leia a altura e imprima se a pessoa e maior 1.8m
    float altura;

    printf("Digite sua altura:");
    scanf("%f",&altura);

    //estrutura condicional ou de selecao 
    if(altura > 1.8){

        printf("Voce é maior que 1.8 ");

    } else {
        printf("Voce é menor que 1.8 ");
    }

}