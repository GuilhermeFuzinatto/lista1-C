/*lista de exercícios*/
#include <stdio.h>

int main(){
    int n;
    int i = 2;
    printf("digite um número: ");
    scanf("%d", &n);
    if(n<=3){
        printf("%d é primo", n);
        return 0;
    }
    while(i<n){
        if(n%i==0){
            printf("%d não é primo", n);
            break;
        }else if(i==(n-1)){
            printf("%d é primo", n);
            break;
        }else if(n==2){
            printf("%d é primo", n);
            break;
        }else{
            i++;
        }
    }

    return 0;
}
