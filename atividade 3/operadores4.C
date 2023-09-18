#include<stdio.h>

main() 
{

      float peso;

    printf("Digite o peso:");
    scanf("%f", &peso);

    if(peso < 60){
        //verdadeiro
        printf("Menor que 60 ");

    } else {
        printf("Maior que 60");
}
}