#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Functions/Student.c"

int updateStudentMenu();

int showMenu(){  
	int init = 0;
	int resp = 0;

   do{
		printf("========= MENU ===========\n");        
		printf("Digite 1 Inserir Aluno \n");
		printf("Digite 2 Listar Alunos \n");
		printf("Digite 3 Atualizar Aluno \n");
		printf("Digite 4 Deletar Aluno \n");
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
			updateStudentMenu(); 
			break;
			}
			case 4:{
			resp = deleteStudent();
			break;
			}       

			break;
			}
   	}        
   while(resp == 0);
}

int updateStudentMenu(){
	    int user_id,option;

    while(option != 0){
        printf("Digite 1 para atualizar Nome \n");
        printf("Digite 2 para atualizar Sexo \n");
		printf("Digite 0 para Menu \n");

        scanf("%d",&option);

		if(option == 0)  {
        	showMenu();
    	}

        updateStudent(option);
    }

	return 0;

}