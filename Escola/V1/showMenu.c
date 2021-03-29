#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headStudent.h"

int showMenu(){  
	int init = 0;
	int resp = 0;

   do{
		printf("========= MENU ===========\n");        
		printf("Digite 1 Inserir Aluno \n");
		printf("Digite 2 Listar Alunos\n");
		printf("========= MENU ===========\n"); 
		scanf("%d",&resp);

		switch (resp){
			case 1:{
			createStudent();  
			break;
			}

			case 2:{
			readStudents(); 
			break;
			}       
   	}        
   } while(resp == 0);
}
