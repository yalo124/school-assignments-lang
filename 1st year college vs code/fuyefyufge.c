#include <stdio.h>
#include <math.h>

int main(){

    int option = 0;
    int Eric_Triceratops = 145000000;
    int Alfred_Brontosaurus = 182000000;
    double months = 0.0;
    double days = 0.0;
    double seconds = 0.0; 
        
    printf("Please pick a Dinosaur (1>Triceratops, 2>Brontosaurus): ");
    scanf("%d", &option);

    if (option == 1){
        months = Eric_Triceratops * 12;
        days = Eric_Triceratops * 365.25;
        seconds = Eric_Triceratops * 365.25 * 24 * 60 * 60;
        printf("Eric the Triceratops lived for 145 million years, %.1lf months, %.1lf days, and %.1lf seconds ago.\n", months, days, seconds);
    }
    else if (option == 2){
        months = Alfred_Brontosaurus * 12.0;
        days = Alfred_Brontosaurus * 365.25;
        seconds = Alfred_Brontosaurus * 365.25 * 24 * 60 * 60;
        printf("Alfred the Brontosaurus lived for 182 million years, %.1lf months, %.1lf days, and %.1lf seconds ago.\n", months, days, seconds);
    }
    else{
        printf("Invalid kupal");
    }
    return 0;
}