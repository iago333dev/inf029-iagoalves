#include <stdio.h> 
#include <string.h>

//questão para calcular a diferença entre duas datas

int main (){
    int count = 0;
    int single_count = 0;
    
    char dia[3];
    char mes[3];
    char ano[5];

    char datainicial[11], datafinal[11];    
    strcpy(datainicial,"10/06/2015");
    strcpy(datafinal,"20/03/2019");
    
    int iDiaInicial, iMesInicial, iAnoInicial;
    int iDiaFinal, iMesFinal, iAnoFinal;
    int qtdAnos, qtdMeses, qtdDias;

    
    
    

    //Zera Contador de Atribuição a Variavel (*DIA*/MES/ANO)
    single_count = 0; 
    //Loop Até Primeira "/"
    while (datainicial[count] != 47){             
        //Atribuição de Valor a Variavel DIA
        dia[single_count] = datainicial[count];
        count++;
        single_count++;
    }    

    //Fecha String DIA com \0
    dia[single_count++] = '\0';
    //Zera Contador de Atribuição a Variavel (DIA/*MES*/ANO)
    single_count = 0;
    //Inicio de LOOP até Segunda "/" 
    count++;

    //Loop Até Segunda "/"
    while (datainicial[count] != 47){        
        mes[single_count] = datainicial[count];
        count++;
        single_count++;
    }
    
    mes[single_count++] = '\0';
    single_count = 0;
    count++;

    //Zera Contador de Atribuição a Variavel (DIA/*MES*/ANO)
    //Loop Até Terceira "/"
    //Atribuição de Valor a Variavel Ano
    while (datainicial[count] != 47){        
        ano[single_count] = datainicial[count];
        count++;
        single_count++;
    }

    ano[single_count++] = '\0';



    printf("Dia: %s \n",dia);
    printf("Mes: %s \n",mes);
    printf("Ano: %s \n",ano);
    



    
    

   /* 
    
    //fazer as validações iniciais
    //tranformar de string para os inteiros
    
    qtdDias = iDiaFinal - iDiaInicial;
    qtdMeses = iMesFinal - iMesInicial;
    qtdAnos = iAnoFinal - iAnoInicial;


    if (qtdMeses < 0){
        qtdAnos--;
        qtdMeses = 12 + iMeses;
    }
    if (qtdDias < 0){
        qtdMeses--;
        qtdDias = QuantidadeDeDiasMesAnterior(iMesFinal) - iDiaInicial + iDiaFinal;
    }
    
    
    */
    
    
    
    
    
    
}    
