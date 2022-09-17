#include <cstdio>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<locale.h>
main()
{
   setlocale(LC_ALL, "Portuguese");
   float n1, n2, ad, sub, mult, div;
   printf("Digite o primeiro numero\n");
   scanf("%f", &n1);
   printf("Digite o segundo numero\n");
  scanf("%f", &n2);
  ad = n1 + n2;
  sub = n1 - n2;
  mult = n1 * n2;
  div = n1 / n2;
   printf("O Resultado da adição é: %.2f \n", ad);
   printf("O Resultado da subtração é: %.2f \n", sub);
   printf("O Resultado da Multiplicação é: %.2f \n", mult);
   printf("O Resultado da Divisão é: %.2f \n", div);
  
  
  
  
  
  
  
  
  
  
  /* scanf("%f", &n2);
   md = (n1 + n2) / 2;
   if (md <= 5)
   {
      printf("REPROVADO");
   }
   else
   {
      printf("APROVADO");
   } */
}