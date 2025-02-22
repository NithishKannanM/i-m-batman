#include <stdio.h>
#include <math.h>

int main(){
    float x, z;
    float y;
    int age;
    
    do {
        printf("Enter your age: ");
        scanf("%d", &age);
        
        if(age >= 18){
            printf("Enter your weight(Kgs): ");
            scanf("%f", &x);
            printf("Enter your height(cm): ");
            scanf("%f", &y);
            z = x / pow(y / 100, 2);
            printf("Your BMI is %.2f\n", z);
            break;
        }
        else {
            printf("You must be at least 18 years old. Try again!\n");
        }
        
    } while (age < 18); 
    
    return 0;
}
