/*lista de exercícios*/
#include <stdio.h>

int main(){
    int n = 1;
    while(n<=100){
        if(n%3==0 && n%5==0){
            printf("%d FizzBuzz\n", n);
            n++;
        }else if(n%3==0){
            printf("%d Fizz\n", n);
            n++;
        }else if(n%5==0){
            printf("%d Buzz\n", n);
            n++;
        }else{
            printf("%d\n", n);
            n++;
        }
    }
    
    return 0;
}