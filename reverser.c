#include <stdio.h>    

void ref(int i){
    int r, re = 0;
    while(i != 0){
        r = i % 10;
        re = re * 10 + r;
        i /= 10;
    }
    printf("%d\n", re);
}

int main(){    
    int x,y;
    printf("Enter thr upper limit: ");
    scanf("%d",&x);
    printf("Enter thr lower limit: ");
    scanf("%d",&y);
    for(int i=x;i>=y;i--){
        ref(i);
    }
    return 0;
}