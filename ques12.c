#include <stdio.h>

int main(){
    int a, b, rem;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(b!= 0) {
        rem = a % b;
        a = b;
        b = rem;
    }

    printf("The GCD of two numbers is: %d", a);
    return 0;
}
