// ...existing code...
#include <stdio.h>
#include <math.h>
#include <string.h>

static void format_commas(unsigned long long value, char *out, size_t out_size) {
    if (out_size == 0) return;
    if (value == 0) {
        snprintf(out, out_size, "0");
        return;
    }
    char tmp[64];
    int pos = 0;
    int digit_count = 0;
    while (value > 0 && pos < (int)sizeof(tmp) - 1) {
        tmp[pos++] = '0' + (int)(value % 10);
        value /= 10;
        digit_count++;
        if (digit_count % 3 == 0 && value > 0) tmp[pos++] = ',';
    }
    int j = 0;
    while (pos > 0 && j + 1 < (int)out_size) out[j++] = tmp[--pos];
    out[j] = '\0';
}

int main(){

    int option = 0;
    int Eric_Triceratops = 145000000;
    int Alfred_Brontosaurus = 182000000;
    unsigned long long months = 0;
    unsigned long long days = 0;
    unsigned long long seconds = 0;

    printf("Please pick a Dinosaur (1>Triceratops, 2>Brontosaurus): ");
    scanf("%d", &option);

    if (option == 1){
        double y = (double)Eric_Triceratops;
        months = (unsigned long long)(y * 12.0 + 0.5);
        days = (unsigned long long)(y * 365.25 + 0.5);
        seconds = (unsigned long long)(y * 365.25 * 24.0 * 60.0 * 60.0 + 0.5);

        char ms[32], ds[32], ss[64];
        format_commas(months, ms, sizeof(ms));
        format_commas(days, ds, sizeof(ds));
        format_commas(seconds, ss, sizeof(ss));

        printf("Eric the Triceratops lived for 145 million years, %s months, %s days, and %s seconds ago.\n", ms, ds, ss);
    }
    else if (option == 2){
        double y = (double)Alfred_Brontosaurus;
        months = (unsigned long long)(y * 12.0 + 0.5);
        days = (unsigned long long)(y * 365.25 + 0.5);
        seconds = (unsigned long long)(y * 365.25 * 24.0 * 60.0 * 60.0 + 0.5);

        char ms[32], ds[32], ss[64];
        format_commas(months, ms, sizeof(ms));
        format_commas(days, ds, sizeof(ds));
        format_commas(seconds, ss, sizeof(ss));

        printf("Alfred the Brontosaurus lived for 182 million years, %s months, %s days, and %s seconds ago.\n", ms, ds, ss);
    }
    else{
        printf("Invalid option\n");
    }
    return 0;
}
