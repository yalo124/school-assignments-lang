#include <stdio.h>

int N, i, sum;

void DIVISOR(){
    sum =0;
    printf("Proper divisors of %d are: ", N);
    for (i=1; i < N; ++i){
        if (N % i == 0){
            printf(" %d,", i);
            sum += i;
        }
    }
    printf("\nThe Sum of proper divisors: %d", sum);

    if(sum<N){
        printf("\n%d < %d is DEFICIENT", sum, N);
    } else if(sum==N){
        printf("\n%d = %d is PERFECT", sum, N);
    }  else{
        printf("\n%d > %d is ABUNDANT", sum, N);
    }
}

int main(void){
    printf("Input N: ");
    scanf("%d", &N);
    DIVISOR();

    return 0;
}