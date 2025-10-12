#include <stdio.h>

int main(){
    int num=0;
    int rem=0;

    printf("Enter ka nga ng Value: ");
    scanf("%d", &num);

    rem= num % 2;

    if(rem==0){
        printf("%d is even!\n", num);
    } else{
        printf("%d is odd!\n", num);
    }
}