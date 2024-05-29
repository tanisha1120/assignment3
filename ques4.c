#include <stdio.h>

int main() {
  
    int number, factorial = 1;

    printf("Enter a number ");
    scanf("%d", &number);

    while (number > 0) {
        factorial *= number;
        number--;
    }

    printf("Factorial: %lld\n", factorial);

}
