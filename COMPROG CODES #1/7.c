#include <stdio.h>

int main(){
    char code;
    float B = 0, H = 0, AR = 0, AT = 0;

    printf("Anong code gusto mo ha? pumili ka: ");
    scanf("%c", &code);

    if (code == 'R' || code == 'r') {
        printf("Enter value for B: ");
        scanf("%f", &B);
        printf("Enter value for H: ");
        scanf("%f", &H);
        AR= B*H;
        printf("Area of Rectangle = %.2f\n", AR);
    }

    else if(code == 'T' || code == 't') {
        printf("Enter value for B: ");
        scanf("%f", &B);
        printf("Enter value for H: ");
        scanf("%f", &H);
        AT = 0.5*B*H;
        printf("Area of Triangle = %.2f\n", AT);
    }
    else{
        printf("Invalid womp womp");
    }
    return 0;

}