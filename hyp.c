#include <stdio.h>
#include <math.h>

int main(){
    float x;
    float y;
    printf("Enter side A: ");
    scanf("%f",&x);
    printf("Enter side B: ");
    scanf("%f",&y);
    float z = sqrt(pow(x,2)+pow(y,2));
    printf("%.2f",z);
}