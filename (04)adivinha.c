/*programas do caralho*/
#include <stdio.h>

int main(){
    int n = 8;
    int a;
    printf("adivinhe o número: ");
    scanf("%d", &a);
    if(a==n){
        printf("parabéns! você acertou!");
    }else{
        printf("você é um fracassado! você errou!");
    }
}
