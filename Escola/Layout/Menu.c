#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int updateMenu();

//#include "../Functions/Student.c"


int showMenu(){  
	int init = 0;
	int resp = 0;

   do{
		printf("========= MENU ===========\n");        
		printf("Digite 1 Inserir Aluno \n");
		printf("Digite 2 Listar Alunos \n");
		printf("Digite 3 Atualizar Aluno \n");
		printf("========= MENU ===========\n"); 
		scanf("%d",&resp);

		switch (resp){
			case 1:{
			resp = createStudent();  
			break;
			}

			case 2:{
			resp = readStudents(); 
			break;
			}   

			case 3:{
			resp = updateStudentMenu(); 
			break;
			}      

			break;
			}
   	}        
   while(resp == 0);
}

int updateStudentMenu(){
	    int menu,user_id,option;

    while(menu != 5){
        printf("Digite 1 para atualizar Nome \n");
        printf("Digite 2 para atualizar Sexo \n");
        scanf("%d",&option);

        menu = updateStudent(option);
    }

}