/*lista de exercícios*/
#include <stdio.h>

int main(){
    int n;
    int i;
    printf("digite um número: ");
    scanf("%d", &n);
    if(n==0){
        printf("%d não é primo", n);
    }
    for(i=1;i<=n;i++){
        if(n<=3){
            printf("%d é primo", n);
            break;
        }else if(n%i==0 && i!=1 && i!=n){
            printf("%d não é primo", n);
            break;
        }else if(n%i!=0 && i==(n-1)){
            printf("%d é primo", n);
            break;
        }
    }

    return 0;
}

