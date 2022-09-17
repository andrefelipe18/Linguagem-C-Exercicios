#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main() {
   int n1, n2, n3, n4, menor;
    printf("Digite o primeiro valor\n");
     scanf("%d", &n1);
    printf("Digite o segundo valor\n");
     scanf("%d", &n2);
    printf("Digite o terceiro valor\n");
     scanf("%d", &n3);
    printf("Digite o quarto valor\n");
     scanf("%d", &n4);
 if(n1 < n2 & n1 < n3 & n1 < n4){
    printf("O Primeiro valor é o menor");
 }
 else if(n2 < n1 & n2 < n3 & n2 < n4){
    printf("O Segundo valor é o menor");
 }
 else if(n3 < n1 & n3 < n2 & n3 < n4){
    printf("O Segundo valor é o menor");
 }
 else if(n4 < n1 & n4 < n3 & n4 < n3){
    printf("O Quarto valor é o menor");
 }
}