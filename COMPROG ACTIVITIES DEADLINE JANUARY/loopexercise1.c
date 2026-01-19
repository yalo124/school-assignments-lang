#include <stdio.h>

int main(){
    int start, end, divisor, count;
    int first = 1;

    printf("start: ");
    scanf("%d", &start);
    printf("end: ");
    scanf("%d", &end);
    printf("divisor: ");
    scanf("%d", &divisor);

    if (divisor==0){
        printf("bawal zero kosah");
        return 1;
    }

    printf("%d to %d which are divisible by %d are: ", start, end, divisor);
    for(int m=start; m<=end; m++){
        if(m%divisor ==0){
            if (first) {
                printf("%d", m);  
                first = 0;        
            } else {
                printf(", %d", m);  
            }
            count++;
        }
    }
    printf("\n");
    printf("There are %d number which are divisible by %d", count, divisor);

    return 0;
}
