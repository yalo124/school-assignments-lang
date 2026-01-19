#include <stdio.h>
#include <math.h>
#define MAX_VALUES 20

int main()
{
    int X[MAX_VALUES];
    int Y[MAX_VALUES];
    int Z[MAX_VALUES]; 
    int N;
    int m;
    int sum_Z = 0; 
    double sqrt_Z; 

    printf("Enter the actual number of data values (1-%d): ", MAX_VALUES);
    if (scanf("%d", &N) != 1 || N <= 0 || N > MAX_VALUES){
        printf("Invalid input! N must be between 1 and %d.\n", MAX_VALUES);
        return 1;
    }

    printf("\n=== Input %d Data Values ===\n", N);
    for(m=0; m<N; m++){
        printf("Value for X[%d]: ", m);
            if (scanf("%d", &X[m]) != 1) { return 1; }
        printf("Value for Y[%d]: ", m);
            if (scanf("%d", &Y[m]) != 1) { return 1; }
    }

    for (m = 0; m < N; m++) {
        Z[m] = X[m] * Y[m];
    
        sum_Z = sum_Z + Z[m]; 
    }
    
    sqrt_Z = sqrt((double)sum_Z);

    printf("\n=== Results ===\n");
    printf("Array Z (X * Y):\n");
    for (m = 0; m < N; m++) {
        printf("Z[%d] = %d\n", m, Z[m]);
    }

    printf("\nSum of items in array Z: %d\n", N, sum_Z);
    printf("Square root of the sum: %.2lf\n", sqrt_Z);
    
    return 0;
}