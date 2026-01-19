#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter 1st positive integer: ");
    scanf("%d", &n1);
    printf("Enter 2nd positive integer: ");
    scanf("%d", &n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("Greatest Common Divisor = %d",n1);

    return 0;
}