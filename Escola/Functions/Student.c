#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Head/Student.h"

int showMenu();

int createStudent(){
    int Matricula;
    char Nome[60];
    char Sexo[5];
	char dataNascimento[11];
    char Cpf[14]; 
    fflush(stdin);    
    
    printf("Digite o Nome \n");   
    getchar();     
    fgets(Nome, 60, stdin);
    fflush(stdin); 
   

    printf("Digite Sexo: M ou F \n");   
    fgets(Sexo, 2, stdin);    
    getchar();       
    fflush(stdin); 
     
    printf("Digite a Data de Nascimento \n"); 
    //getchar();
    fgets(dataNascimento, 11, stdin);
    fflush(stdin); 

    printf("Digite o CPF \n");   
    //getchar();
    fgets(Cpf, 15, stdin);

    allStudents[indexStudent].Matricula = indexStudent;
    strcpy(allStudents[indexStudent].Nome,Nome);
    strcpy(allStudents[indexStudent].Sexo,Sexo);
    strcpy(allStudents[indexStudent].dataNascimento,dataNascimento);
    strcpy(allStudents[indexStudent].Cpf,Cpf);   

    indexStudent++;

    return 0;
}


int readStudents(){

    int count = 0;

    printf("**************************** \n");
    while(count != indexStudent){
        printf("Matricula %d \n",allStudents[count].Matricula);
        printf("Nome: %s",allStudents[count].Nome);    
        printf("Genero: %s \n",allStudents[count].Sexo);
        printf("Data de Nascimento: %s",allStudents[count].dataNascimento);
        printf("CPF: %s",allStudents[count].Cpf);
        count++;
        printf("**************************** \n");
   }

   

    showMenu();
}; 

int updateStudent(int option){    
    char novo_nome[60];
    char novo_sexo[5];
    int user_id = 0;

    fflush(stdin);    
    

    printf("Digite o Numero Matricula do Aluno Para Alteração \n");
    scanf("%d",&user_id);
    fflush(stdin);  


    switch (option)
    {
    case 1:{
            printf("Digite um novo NOME para %s\n",allStudents[user_id].Nome);   
            getchar();     
            fgets(novo_nome, 60, stdin);           
            strcpy(allStudents[user_id].Nome,novo_nome);
        
            break;
        }
            case 2:{
            printf("Digite um SEXO para %s",allStudents[user_id].Nome);   
            getchar();     
            scanf("%s",&novo_sexo);                    
            //fgets(novo_sexo, 60, stdin);           
            strcpy(allStudents[user_id].Sexo,novo_sexo);
        
            break;
        }
    }
      
    
    
    showMenu();


    
}