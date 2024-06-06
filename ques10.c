#include <stdio.h>

int main(){
    long float base, exponent, result = 1;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);
    int i;
    for ( i = 1; i <= exponent; i++){
        result *= base;
    }

    printf("%lf raised to the power of %lf is: %lf\n", base, exponent, result);

    return 0;
}
