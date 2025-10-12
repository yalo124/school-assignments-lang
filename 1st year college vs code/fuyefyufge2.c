#include <stdio.h>
#include <string.h>

void dinosaurror(char name[],char dinosaur[], double years, double months, double days, double seconds) {
    printf("%s the %s lived for %.0lf years, %.1lf months, %.1lf days, and %.1lf seconds.\n", name, dinosaur, years, months, days, seconds);
}

int main() {
    char name[100];
    char dinosaur[100];
    double years = 0;
    double months = 0.0;
    double days = 0.0;
    double seconds = 0.0;

    printf("Ilagay ang pangalan ng dinosaur: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Ilagay ang uri ng dinosaur: ");
    fgets(dinosaur, sizeof(dinosaur), stdin);
    dinosaur[strcspn(dinosaur, "\n")] = 0; 

    printf("Years lived: ");
    scanf("%lf", &years);

    months = years * 12;
    days = years * 365.25;
    seconds = years * 365.25 * 24 * 60 * 60;

    dinosaurror(name, dinosaur, years, months, days, seconds);

    return 0;
}