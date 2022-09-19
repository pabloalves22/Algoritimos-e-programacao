//***************** PROGRAMA CALCULO DE QUANTIDADE DE FIOS***************************
//***************** DECLARAÇÃO DAS BIBLIOTECAS NECESSÁRIAS **************************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//****************** PROGRAMA DE CALCULO *********************************************
int main(){ //inicio
    int total_cabo, tot_rolos, m_avulso;          // Declaração das variaveis globais  
    int TAM_ROLO=50;                              // Constante utilizada no programa 
    

    printf("Programa de calculo de quantidade de cabos eletricos\n\n\n");

    printf("Entre com a metragem total de cabo:");
    scanf("%d" , &total_cabo);                     // Leitura dos dados pra variavel 
  
    m_avulso = total_cabo % TAM_ROLO;              // Sobra de cabo em metros (MOD)
    tot_rolos = total_cabo/TAM_ROLO;               // Cálculo do total de cabos

     printf(" serao necessarios  %d ", tot_rolos); // Impressão do resultado 
	 printf(" rolos de 50 metros");
     printf(" mais %d ", m_avulso);
	 printf("metros de cabo avulso\n");

    
system("pause");                                   // Função para aguardar comando do usuário
} 