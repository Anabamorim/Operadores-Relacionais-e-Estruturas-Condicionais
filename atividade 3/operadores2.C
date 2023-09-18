#include<stdio.h>

main(){
    float salario;

    printf("Digite o salario:");
    scanf("%f", &salario);

    //estrutura condicional ou de selecao 
    if(salario >= 1.350){
        //verdadeiro
        printf("Salario maior que o minimo ");

    } else {
        printf("Salario menor");
    }
}