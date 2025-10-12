#include <stdio.h>
#include <math.h>

int main(){
    int hours = 0;
    int minutes = 0;

    printf("Enter hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("%d hours is equal to %d minutes", hours, minutes);

    return 0;
}