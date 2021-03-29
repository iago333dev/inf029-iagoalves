#define maxStudent 6
struct Student createStudent();
int readStudents();

int indexStudent;

struct Student{
    int Matricula;
    char Nome[60];
    char Sexo[2];
	char dataNascimento[11];
    char Cpf[15];
};

struct Student allStudents[maxStudent];