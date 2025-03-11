/*lista de exercícios*/
#include <stdio.h>

int main(){
    int n;
    printf("digite um número: ");
    scanf("%d", &n);
    if(n%2==0){
        printf("%d é par", n);
    }else{
        printf("%d é ímpar", n);
    }

    return 0;
}