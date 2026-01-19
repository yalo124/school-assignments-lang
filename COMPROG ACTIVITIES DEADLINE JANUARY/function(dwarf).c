#include <stdio.h>

int i, num, sum;
double divide;

void DWARF()
{
    sum = 0;
    divide = 0;
    printf("Factors of %d are: ", num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d,", i);
            sum += i;
        }
    }
    divide = num / 2.0;
    printf("\nthe sum of its factor: %d ", sum);
    printf("\nThe half of the number: %d/2 = %.2lf\n", num, divide);
}

int main(void){
    do{
    printf("Plese enter a positive integer: ");
    scanf("%d", &num);
    }
    while(num <0);

    if (num % 2 == 0)
    {
        DWARF();
        printf("\n%d is DWARF", num);
    }
    else
    {
        DWARF();
        printf("\n%d is NOT DWARF", num);
    }

    return 0;
}
