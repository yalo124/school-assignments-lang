#include <stdio.h>

int main(){
    int A=0;
    int B=0;

    printf("enter the value of A: ");
    scanf("%d", &A);
    printf("enter the value of B: ");
    scanf("%d", &B);

    if (A>B){
        printf("%d is greater than %d\n", A, B);
    }
    else if(A<B){
        printf("%d is less than %d\n", A, B);
    }
    else{
        printf("Invalid");
    }
    

    return 0;
}