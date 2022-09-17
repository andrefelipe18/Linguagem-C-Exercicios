#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    printf("Digite o numero\n");
    scanf("%d", &n1);
    if(n1%2==0) {
        printf("Numero par");
    }
    else {
        printf("Numero impar");
    }
}