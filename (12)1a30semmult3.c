/*lista de exercícios*/
#include <stdio.h>

int main(){
    int n = 1;
    while(n<=30){
        if(n%3==0){
            n++;
        }else{
            printf("%d \n", n);
            n++;
        }
    }

    return 0;
}