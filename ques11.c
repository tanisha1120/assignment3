#include <stdio.h>

int main() {
    int num, originalnum, remainder, n = 0;
    int result = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalnum = num;

    while (originalnum!= 0) {
        originalnum /= 10;
        n++;
    }

    originalnum = num;

    while (originalnum!= 0) {
        remainder = originalnum % 10;
        for (int i = 1; i <= n; i++) {
            power *= remainder;
        }
        result += power;
        power = 1;
        originalnum /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } 
    else {
        printf("%d is not an Armstrong number.\n", num);
    }

}
