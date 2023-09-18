#include<stdio.h>

main(){

    // Leia a idade e imprima se a pessoa e maior 
    int idade;

    printf("Digite sua idade:");
    scanf("%d",&idade);

    //estrutura condicional ou de selecao 
    if(idade >= 18){

        printf("E maior de idade");

    } else {
        printf(" Menor de idade");
    }

}