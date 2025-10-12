#include <stdio.h>
#include <math.h>

int main(){

    int option = 0;
    float feet = 0.0;
    float inches = 0.0;
    float centimeter = 0.0;
    float meter = 0.0;

    printf("Please select the conversion type (1>Inches, 2>Centimeter, 3>Meter): ");
    scanf("%d", &option);

    if(option == 1){
        printf("Enter feet: ");
        scanf("%f", &feet);
        inches = feet * 12;
        printf("%.2f", inches);
    }
    else if (option == 2){
        printf("Enter feet: ");
        scanf("%f", &feet);
        centimeter = feet * 30.48;
        printf("%.2f", centimeter);
    }
    else if (option == 3){
        printf("Enter feet: ");
        scanf("%f", &feet);
        meter = feet * 0.3048;
        printf("%.2f", meter);
    }
    else{
        printf("Invalid");
    }

    return 0;
}