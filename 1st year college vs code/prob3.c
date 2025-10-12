#include <stdio.h>
#include <math.h>

int main(){

    double numX = 0.0;
    double numY = 0.0;
    double numZ = 0.0;
    double average = 0.0;

    printf("Please enter the first number: ");
    scanf("%lf", &numX);
    printf("Please enter the second number: ");
    scanf("%lf", &numY);
    printf("Please enter the third number: ");
    scanf("%lf", &numZ);

    average = (numX + numY + numZ) / 3.0;

    printf("The average is %.9lf", average);


    return 0;

}