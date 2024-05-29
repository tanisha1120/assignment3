#include <stdio.h>

int main() {
    float n1, n2;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &n1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%f", &n2);

    if (operator == '+') {
        printf(" %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    } 
    else if (op == '-') {
        printf(" %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    } 
    else if (op == '*') {
        printf(" %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    }
    else if (op == '/') {
        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
      
    else {
        printf("Error: Invalid operator. Please enter +, -, * or /\n");
    }

    
}
