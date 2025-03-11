/*lista de exercícios*/
#include <stdio.h>

int main(){
    int n;
    int i;
    for(n=1;n<=50;n++){
        for(i=1;i<=n;i++){
            if(n<=3){
                printf("%d \n", n);
                i=1;
                break;
            }else if(n%i==0 && i!=1 && i!=n){
                i=1;
                break;
            }else if(n%i!=0 && i==(n-1)){
                printf("%d \n", n);
                i=1;
                break;
            }
        }
    }

    return 0;
}