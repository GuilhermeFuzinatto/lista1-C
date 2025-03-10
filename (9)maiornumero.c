/*programas do caralho*/
#include <stdio.h>

int main(){
    int a;
    int b;
    printf("digite dois números:\n");
    scanf("%d \n %d", &a, &b);
    if(a>b){
        printf("%d é maior que %d", a, b);
    }else if(b>a){
        printf("%d é maior que %d", b, a);
    }else{
        printf("os dois números são iguais");
    }
}