/*lista de exercícios*/
#include <stdio.h>

int main(){
    float alt;
    float peso;
    float imc;
    printf("digite sua altura em metros: ");
    scanf("%f", &alt);
    while(alt>10){
        printf("altura inválida, digite novamente: ");
        scanf("%f", &alt);
    }
    printf("digite seu peso em quilos: ");
    scanf("%f", &peso);
    imc = peso / (alt*alt);
    printf("%.1f é seu IMC\n", imc);
    if(imc<=18.5){
        printf("abaixo do peso");
    }else if(imc<=24.9){
        printf("peso ideal");
    }else if(imc<=29.9){
        printf("acima do peso");
    }else if(imc<=34.9){
        printf("obesidade grau 1");
    }else if(imc<=39.9){
        printf("obesidade grau 2 (severa)");
    }else{
        printf("obesidade grau 3 (mórbida)");
    }
    
    return 0;
}