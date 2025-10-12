#include <stdio.h>

int main(){
    double a = 0;
    double b = 0;
    double ave = 0;
    double sum = 0;
    double diff = 0;
    double prod = 0;

    printf("ano ba ang value ng A mo?: ");
    scanf("%lf", &a);
    printf("ano ba ang value ng B mo?: ");
    scanf("%lf", &b);

    ave= (a+b)/2.0;
    sum= a+b;
    diff= a-b;
    prod= a*b;
    
    if(ave<15){
        printf("%.2lf is the sum", sum);
    } 
    else if(ave==15){
        printf("%.2lf is the difference", diff);
    }
    else {
        printf("%.2lf is the product", prod);
    }
    return 0;
}