//*************************** CALCULO DE MEDIA ARITIMÉRICA ***************************************
//*************************** DECLARAÇÃO DAS BIBLIOTECAS *****************************************

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//*************************** DECLARAÇÃO DE VARIÁVEIS ********************************************

 float nota_A, nota_B, nota_C, Resultado;    // varáveis do tipo float para numeros com virgula

//**************************** INÍCIO DO PROGRAMA ************************************************
int main(){ //inicio 
    

    printf("Programa de calculo de area de media aritimetica de 3 numeros\n\n\n");

    printf("Entre com o primeiro valor:");      // Solicitação dos dados 
    scanf("%f" , &nota_A);                      // Leitura dos dados e armazena na veriavel 
    
    printf("Entre com o segundo valor:");       // Solicitação dos dados 
    scanf("%f" , &nota_B);                      // Leitura dos dados e armazena na veriavel 

    printf("Entre com o terceiro valor:");      // Solicitação dos dados 
    scanf("%f" , &nota_C);                      // Leitura dos dados e armazena na veriavel 

	 
	Resultado = (nota_A+nota_B+nota_C)/3;       // Calculo da média 

	 printf(" A media dos valores e %.2f ", Resultado); // Impressão do resultado
	 printf("\n");
    
system("pause");                                // Aguarda o comando do usuário
}// fim
