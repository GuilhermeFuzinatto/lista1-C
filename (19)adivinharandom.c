/*lista de exercícios*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n = rand() % 100;
    int a;
    printf("adivinhe o número misterioso (1 a 100): ");
    scanf("%d", &a);
    if(a==n){
        printf("parabéns! você acertou!");
    }else{
        printf("seu lixo! você errou!");
    }
    
    return 0;
}
