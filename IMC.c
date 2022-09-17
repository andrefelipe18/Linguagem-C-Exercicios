#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main() {
    float peso, altura, imc;
    printf("Digite seu peso");
    scanf("%f", &peso);
    printf("Digite sua altura");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if (imc == 18.5){
        printf("Abaixo do peso ideal");
    }
    else if (imc >= 18.5 & imc <= 24.9) {
        printf("Peso normal");
    }
    else if (imc >= 25.0 & imc <= 29.9){
        printf("Acima de seu peso (sobrepeso)");
    }
    else if (imc >= 30.0 & imc <= 34.9){
        printf("Obesidade grau I");
    }
    else if (imc >= 35.0 & imc <= 39.9){
        printf("Obesidade grau II");
    }
    else if (imc >= 40.0){
        printf("Obesidade grau III");
    }
}