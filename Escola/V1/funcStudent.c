#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headStudent.h"
int showMenu();

struct Student createStudent(){
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
    showMenu();
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