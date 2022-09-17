#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
#include<locale.h>
main() //Inicio 
{
setlocale(LC_ALL, "Portuguese");
float brl, usd, brlusd; //Criação de Variaveis
printf("Digite o valor em REAIS:  "); //Digitando o primeiro numero
scanf("%f", &brl); //Lendo o primeiro numero	
usd = 4.82; 
brlusd = brl / usd;
printf("O valor em DOLAR É: %f", brlusd);





/*scanf("%d", &n2); //Lendo o segundo numero	
if (n1 == n2) { //Caso Primeiro numero igual igual a numero 2
	printf("Numeros Iguais!!\n\n"); //Escrever que são iguais 
	
}
else if (n1 > n2){ //Caso numero 1 maior que numero 2
	printf("Primeiro Numero Maior que segundo numero\n\n"); //Escrever numero 1 maior que numero 2
}	
else {
	printf("Segundo Numero Maior que primeiro numero\n\n"); //Escrever numero 2 maoir que numero 1
}	
	printf("OPA!!!!!!!!!!"); */
}			//Fim																																				
