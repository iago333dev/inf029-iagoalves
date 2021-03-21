#include <stdlib.h>
#include <stdio.h>

int main (void){

    int value1;
    int value2;
    int result = 0;

    printf("Digite o Primeiro Numero \n");
    scanf("%d",&value1);

    printf("Digite o Segundo Numero \n");
    scanf("%d",&value2);

    result = Subtrair(value1,value2);
    printf("Resultado: %d \n",result);   

}