#include <stdio.h>

int main(){

    int num=0;
    int rem=0;

    printf("Enter a Value: ");
    scanf("%d", &num);

    rem=num%5;

    if(rem==0){
        printf("%d is divisible by 5!", num);
    }
    else{
        printf("%d not divisible by 5!");
    }
}