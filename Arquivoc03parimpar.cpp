#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
#include<locale.h>
main() //Inicio 
{
setlocale(LC_ALL, "Portuguese");
int n1; //Cria��o de Variaveis
printf("Digite o numero:  "); //Digitando o primeiro numero
scanf("%d", &n1); //Lendo o primeiro numero	
 if (n1%2 == 0) {
 	printf("O numero � par");
 }
else {
	printf("O numero � impar");
}

}																														
