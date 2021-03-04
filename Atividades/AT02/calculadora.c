#include <stdio.h>
#include <stdlib.h>

//Global vars
int value1 = 0;
int value2 = 0;
int result_value = 0;


int ShowResult(int result_value){
  printf("Resultado %d \n",result_value);
  return 0;
}

int add(value1,value2){
result_value = value1 + value2; 
return ShowResult(result_value);
}
int sub(value1,value2){
  result_value = value1 - value2; 
  return ShowResult(result_value);
}
int mult(value1,value2){
  result_value = value1 * value2; 
  return ShowResult(result_value);
}
int divz(value1,value2){
  result_value = value1 / value2; 
  return ShowResult(result_value);
}


int RunCalc(option){

  printf("Digite o Primeiro Valor\n");
  scanf("%d", &value1);
  printf("Digite o Segundo Valor\n");
  scanf("%d", &value2);

  if(option == 1){ add(value1,value2); }
  if(option == 2){ sub(value1,value2); }
  if(option == 3){ divz(value1,value2); }
  if(option == 4){ mult(value1,value2); }
  
  return 0;
}

int main() {
  int option = 0;

  while(option <= 0 || option > 4){
    printf("Digite 1 para Adição\n");
    printf("Digite 2 para Subtração\n");
    printf("Digite 3 para Divisão\n");
    printf("Digite 4 para Multiplicação\n");
    scanf("%d",&option);  
  }
  RunCalc(option);
}



