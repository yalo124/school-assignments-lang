#include <stdio.h>

int main(){

    int num=0;

    printf("Enter a Value: ");
    scanf("%d", &num);

    if(num>0){
        printf("The Value is Positive");
    }
    else{
        printf("The Value is Negative");
    }

    return 0;
}