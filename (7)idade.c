/*programas do caralho*/
#include <stdio.h>

int main(){
    int idade;
    printf("qual é a sua idade? ");
    scanf("%d", &idade);
    while(idade<0){
        printf("digita dnv aí pq isso é impossível. ");
        scanf("%d", &idade);
    }
    if(idade<14){
        printf("você é criança :D");
    }else if(idade<18){
        printf("você é adolescente D:");
    }else if(idade<60){
        printf("você é adulto :/");
    }else{
        printf("você é idoso :)");
    }
}