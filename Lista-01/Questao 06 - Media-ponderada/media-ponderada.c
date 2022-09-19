//********************** PROGRAMA DE CALCULO DE MÉDIA PONDERADA ***************************
//********************** DECLARAÇÃO DAS BIBLIOTECAS UTILIZADAS ****************************

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//********************** DECLARAÇÃO DAS VARIAVEIS  E CONSTANTES GLOBAIS *******************
    float nota_A, nota_B, Resultado;
    float PESO_1 = 3.5;
    float PESO_2 = 7.5;

//********************************** iNÍCIO DO PROGRAMA ************************************

int main(){   

    printf("Programa de calculo da nota de um aluno:\n\n\n");

    printf("Entre com o primeiro valor:");
    scanf("%f" , &nota_A);                             // Leitura dos dados para variável 
    
    printf("Entre com o segundo valor:");
    scanf("%f" , &nota_B);                             // Leitura dos dados para variável 

 	 
	Resultado = ((nota_A*PESO_1)+(nota_B*PESO_2))/10;  // Cálculo da media ponderada

    if(Resultado >= 10){                               // Função de aleta para notas acima de 10 pontos
        printf("Aviso, nota maxima de 10 pontos atingida, por favor revise as notas e o peso da nota \n");
        }
	 printf(" A media dos valores e %f ", Resultado);  // Resultado do calculo 
	 printf("\n");
    
system("pause");
}
//*********************************** FIM ************************************************