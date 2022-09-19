//******************************** CALCULO DA ÁREA DE UM CIRCULO *******************************************
//******************************** DECLARAÇÃO DAS BIBLIOTECAS **********************************************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//********************************* DECLARAÇÃO DAS VARIÁVEIS ***********************************************
 float raio, area;                                           // Declaração de variáveis foi usado float 
                                                             // para suportar numeros com virgula
//********************************** INÍCIO DO PROGRAMA ****************************************************
int main(){ //Inicio
   

    printf("Programa de calculo de area de um circulo\n\n\n");  // Impressão do titulo do programa 

    printf("Digite o raio do circulo desejado em cm2: ");        // Requisição dos dados  
    scanf("%f" , &raio);                                        // Leitura dos dados e armazena na variável.
	 
	area = (pow(raio,2)*3.14);                                  // Função de calculo de área 
	 printf(" A area total do circulo e %f ", area);            // Impressão do reultado
	 printf("cm2\n");                                           // Impressão da unidade de medida
    
system("pause");                                                // Função que aguarda comando do usuário

}// fim 
