#include <stdio.h>

int main() {
    printf("char: %f bytes\n", sizeof(char));
    printf(" short int: %f bytes\n", sizeof(short int));
    printf(" int: %f bytes\n", sizeof(int));
    printf(" long int: %f bytes\n", sizeof(long int));
    printf(" long long int: %f bytes\n", sizeof(long long int));
    printf(" float: %f bytes\n", sizeof(float));
    printf(" double: %f bytes\n", sizeof(double));
    printf(" long double: %f bytes\n", sizeof(long double));

    return 0;
}
