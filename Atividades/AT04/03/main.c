#include <stdlib.h>
#include <stdio.h>


int main (void){

    int value1;
    int value2;
    int result = 0;

    printf("Digite o Numero \n");
    scanf("%d",&value1);

    result = Fatorar(value1);
    
    if(result == 0){ 
        printf("Erro: Não foi possivel fazer o calculo \n");
        printf("Insira um valor maior que 2 \n");
        return 0;
    }

    printf("Fatorial: %d \n",result);   

}