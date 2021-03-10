#include <stdio.h>
#include <stdlib.h>

#include "Hello.h"
int var = 0;

int main (void){
	var = Hello();
    
    if(var){
        printf("Hello World \n");    
    }
}
