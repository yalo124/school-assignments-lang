#include <stdio.h>
#include <math.h>

int main(){

    double base = 0.0;
    double height = 0.0;
    double area_of_triangle = 0.0;
    double AREA_OF_RECTANGLE = 0.0;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the height: ");
    scanf("%lf", &height);

    AREA_OF_RECTANGLE = base * height;
    area_of_triangle = 0.5 * base * height;

    printf("The area of rectangle is %.2lf\n", AREA_OF_RECTANGLE);
    printf("The area of triangle is %.2lf\n", area_of_triangle);

    return 0;
}