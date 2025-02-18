#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c to consume newline

   

    // Performing operations using if-else
    if (op == '+') {
        result = num1 + num2;
        printf("Result: %d", result);
    } 
    else if (op == '-') {
        result = num1 - num2;
        printf("Result: %d", result);
    } 
    else if (op == '*') {
        result = num1 * num2;
        printf("Result: %d", result);
    } 
    else if (op == '/') {
        if (num2 != 0) { // Prevent division by zero
            result = num1 / num2;
            printf("%d", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
