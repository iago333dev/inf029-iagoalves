#include <stdio.h>
#include <stdlib.h>



int questao_a(int n){
	if(n!=0){
        return n*questao_a(n-1);
    }   	  
	else{ 
        return 1; 
    } 
}

int questao_b(int n1){
    printf("%d\n",n1);
    
    int n2,n3;
	
    if(!n1){
        n1 = 1;
    }   	  

    n2 = n1+1;
    n3 = n1+n2;
    questao_b(n3);
    
}

int main(){
	int n = 5;

	printf("%d %d \n", n, questao_a(n));
    printf("%d %d \n", n, questao_b(1));
	return 0;
}
