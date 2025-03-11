/*lista de exercícios*/
#include <stdio.h>

int main(){
    int a;
    int b;
    printf("digite dois números:\n");
    scanf("%d\n%d", &a, &b);
    if(a==b){
        printf("os dois números são iguais");
    }else{
        printf("os dois números são diferentes");
    }
    
    return 0;
}