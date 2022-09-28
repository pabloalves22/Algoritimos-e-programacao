//******************************** PROGRAMA DE CONVERSÃO DE TEMPO ****************************************
//******************************** DECLARAÇÃO DAS BIBLIOTECAS ********************************************
#include <stdio.h>
#include <stdlib.h>

//******************************** DECLARAÇÃO DAS VARIÁVEIS **********************************************

int segundos, hora, minuto, resto;                  // variaves do programa 
int T_HORA = 600;                                   //Constantes usadas no programa 
int T_SEGUNDO = 3600;                               // Constantes usadas no programa 

//******************************** INÍCIO DO PROGRAMA ****************************************************
int main(){   
    
    printf("Programa de calculo de tempo\n\n\n");       // Impressão do titudo do programa 

    printf("Digite a quantidade de horas desejada:");   //REquisisção dos dados 
    scanf("%d" , &hora);                                //Função que lê os dados e armazena na variável 

    minuto = (hora * T_HORA);                           //Conversão de hora em minutos
    segundos = (hora * T_SEGUNDO);                      //Conversão de horas em segundos 

    printf(" O total de minutos e %d\n", minuto);       //Impressão do resultado
    printf(" O total de segundos e %d\n", segundos);    //Impressão do resultado


   system("pause");                                     //Função para o programa aguardar um comando para encerrar
}// fim 

