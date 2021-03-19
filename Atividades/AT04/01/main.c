#include <stdlib.h>
#include <stdio.h>

int Soma(int valor1,int valor2);

int valor1 = 0;
int valor2 = 0;
int resultado = 0;

int main (void){
    printf("Digite Valor 1 \n");
    scanf("%d",&valor1);
    printf("Digite Valor 2 \n");
    scanf("%d",&valor2);


    resultado = Soma(valor1, valor2);

    printf("Resultado: %d \n",resultado);

}