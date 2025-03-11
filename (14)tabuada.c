/*lista de exercícios*/
#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int r;
    printf("digite um número: ");
    scanf("%d", &n);
    while(i<=10){
        r = n * i;
        printf("%d * %d = %d \n", n, i, r);
        i++;
    }
    
    return 0;
}