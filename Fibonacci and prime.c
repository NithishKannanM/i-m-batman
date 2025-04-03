#include <stdio.h>

int prime(int num){
    if(num < 2) return 0;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int x[50] = {1,1,2};
    int i,u;
    int pr[100];
    int c = 0;
    for(int i = 3; i <= 35;i++){
        x[i] = x[i-2]+x[i-1];
    }
    for(int j = 2; j <= 500;j++){
        if(prime(j)){
            pr[c] = j;
            c++;
        }
    }
    scanf("%d",&u);
    if(u%2 != 0){
        printf("%d",x[(u+1)/2-1]);
    }
    else{
        printf("%d",pr[u/2-1]);
    }
    return 0;
}