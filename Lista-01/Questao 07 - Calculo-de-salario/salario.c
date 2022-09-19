//********************** PROGRAMA DE CÁLCULO DE SALARIO ********************************************
//********************** DECLARAÇÃO DAS BIBLIOTECAS ************************************************

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//*********************** DECLARAÇÃO DAS VARIÁVEIS *************************************************

float salario, valor_hora, hora;
char nome[20], sexo[20], matricula;

//*********************** INÍCIO DO PROGRAMA *******************************************************

int main(){
 
    printf("Programa de calculo de salario\n\n\n");

    printf("Entre com o nome do funcionario(a):");
    scanf("%s" , &nome);                            // leitura dos dados para variável 
    
    printf("informe o sexo do funcionario(a):");
    scanf("%s" , &sexo);                            // leitura dos dados para variável 

    printf("informe a matricula do funcionario(a):");
    scanf("%d" , &matricula);                       // leitura dos dados para variável 

    printf("informe o total de horas funcionario(a):");
    scanf("%f" , &hora);                             // leitura dos dados para variável 

    printf("informe o valor da hora funcionario(a):");
    scanf("%f" , &valor_hora);                       // leitura dos dados para variável 
	printf("\n");


	salario = hora * valor_hora;                    // Cálculo do salario

	 printf(" Nome: %s\n", nome);                   // Impressão dos resultados
     printf(" Sexo: %s\n", sexo);
     printf(" Matricula: %d\n", matricula);
     printf(" Salario: %f\n ", salario);
	 printf("\n");
    
system("pause");                                    // Função para aguradar comando do usuário
} // fim
