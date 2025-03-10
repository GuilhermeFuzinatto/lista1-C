/*programas do caralho*/
#include <stdio.h>

int main(){
    int n;
    printf("digite um número: ");
    scanf("%d", &n);
    if(n<0){
        printf("%d é negativo", n);
    }else if(n>0){
        printf("%d é positivo", n);
    }else{
        printf("%d é 0 né porraa", n);
    }
}
