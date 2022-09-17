#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main()
{
    int area, base, altura;
    printf("Escreva a base  \n");
    scanf("%d",&base);
    printf("Escreva a altura  \n");
    scanf("%d", &altura);
    area = (base * altura) / 2;
    printf("A area do triangulo =  %d", area);
} 