#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, qd;
                printf("Digite o seu numero");
    scanf("%d", &n1);
    qd = n1*n1;
    printf("O numero ao quadrado é %d", qd);
}