#include <stdio.h>
#include <math.h>

int main () {
    int ft=0;
    int in=0;
    double cm=0;
    int m=0;

    printf("enter ft: ");
    scanf("%d", &ft);
    in= ft*12;
    printf("in=%d\n", in);
    cm= in*2.54;
    printf("cm=%.2lf\n", cm);

    return 0;
}