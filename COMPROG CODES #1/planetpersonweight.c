#include <stdio.h>
#include <math.h>

int main(){

    int pounds = 0;
    double mars_weight = 0.0;
    double jupiter_weight = 0.0;

    printf("Enter weight in earth pounds: ");
    scanf("%d", &pounds);

    mars_weight = pounds * 0.38;
    jupiter_weight = pounds * 2.64;

    printf("Th person weight on mars: %.2lf\n", mars_weight);
    printf("Th person weight on jupiter: %.2lf\n", jupiter_weight);

    return 0;
}