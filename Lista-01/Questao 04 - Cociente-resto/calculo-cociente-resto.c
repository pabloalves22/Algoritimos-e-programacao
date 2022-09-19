//************************* CALCULO DE QUOCIENTE E RESTO ********************************************
//************************* DECLARAÇÃO DE BIBLIOTECAS ***********************************************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//************************* DECLARAÇÃO DAS VARIÁVEIS *************************************************
int dividendo, divisor, quociente, resto;           // declaração de variáveis do tipo inteiro

//************************* INICIO DO PROGRAMA *******************************************************

int main(){ // inicio
    
    

    printf("Programa de calculo de divisao\n\n\n");     // Titulo do programa

    printf("Entre com o valor do dividendo:");          // Requisição dos dados
    scanf("%d" , &dividendo);                           // Leitura dos dados e armazena em uma variável
    
    printf("Entre com o valor do divisor:");            // Requisição dos dados
    scanf("%d" , &divisor);                             // Leitura dos dados e armazena em uma variável

    resto = dividendo % divisor;                        // calculo do resto da divisão ( mod)
    quociente = dividendo/divisor;                      // calculo do quociente da divisão


	 printf(" O resto da divisao e  %d ", resto);       // Impressão do resultado 
	 printf("\n");
     printf(" O quciente da divisao e  %d ", quociente);// Impressão do resultado 
	 printf("\n");


    
system("pause");                                         // Aguarda comando do usuário
} // fim