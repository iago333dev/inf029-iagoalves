#include <stdio.h>
#include <stdlib.h>
#include "head.h"

Values * valueVariable;

int main(void){

    Values Variable;

    printf("Digite um numero \n");
    scanf("%d",&Variable.Value1);
        
    //Variable.Value1 = 3;
    Variable.Value2 = 6;
    Variable.Value3 = 12;
    Variable.Value4 = 72;

    Variable = returStruct(Variable);

    printf("Seu numero mais 1: %d \n",Variable.Value1);
    printf("Seu numero * 6: %d \n",Variable.Value2);
    printf("Um Numero Aleatorio %d \n",Variable.Value3);
    printf("Outro Numero Aleatorio %d \n",Variable.Value4);
 
   //printf("%d\n", y.i);
   return 0;
}

