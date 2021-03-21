#include <stdio.h>
#include <stdlib.h>

int Fatorar(int value1){
    int result = 1;

    if(value1 < 2){
        return 0;
    }
   
    while(value1!=1){
        result = value1 * result;      
        value1--;
    }
    
    return result;
}