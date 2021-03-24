#include <stdlib.h>
#include <stdio.h>



int main (void){

    int value1;
    int value2;
    int value3;
    int *result;

    printf("Digite o Primeiro Numero \n");
    scanf("%d",&value1);
    printf("Digite o Segundo Numero \n");
    scanf("%d",&value2);
    printf("Digite o Terceiro Numero \n");
    scanf("%d",&value3);

    result = createArray(value1,value2,value3);

    for (int i = 0; i <= 2; i++ ) {
      printf("\nResultados: %d\n",result[i]);
    }
    
}
