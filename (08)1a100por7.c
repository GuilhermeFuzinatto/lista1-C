/*programas do caralho*/
#include <stdio.h>

int main(){
    int n = 1;
    while(n<=100){
        if(n%7==0){
            printf("%d \n", n);
            n++;
        }else{
            n++;
        }
    }
}
