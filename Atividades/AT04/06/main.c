#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"

int main (void){

char tresLetras[3];
char tresLetrasNew;

    printf("Digite 3 Letas \n");
    scanf("%s",tresLetras);

   tresLetrasNew = returChar(tresLetras);

   printf("%s",tresLetrasNew);



}
