/*lista de exercícios*/
#include <stdio.h>

int main(){
    int n;
    int a = 0;
    int b = 1;
    int r = 0;
    printf("digite um número: ");
    scanf("%d", &n);
    while(r<=n){
        r = a + b;
        if(r==n){
            printf("%d está na sequência de fibonacci", n);
            break;
        }else if (r<n){
            a = b;
            b = r;
        }else{
            printf("%d não está na sequência de fibonacci", n);
        }
    }
    
    return 0;
}