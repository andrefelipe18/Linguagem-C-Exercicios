
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Portuguese");
    float brl, usd, brlinusd;
    printf("Digite O Valor em Reais\n");
    scanf("%f", &brl);
    usd = 4.77;
    brlinusd = brl / usd;
    printf("O Dolar está em  %f  reais", usd);
    printf("O valor de Reais em dolar é:  %f", brlinusd);
}