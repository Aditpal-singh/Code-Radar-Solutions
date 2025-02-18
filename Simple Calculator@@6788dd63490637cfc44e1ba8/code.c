#include <stdio.h>

int main() {
    int num1, num2;
    double result1,result2,result3,result4;
    char op;
    scanf("%d", &num1);
    
    scanf("%d", &num2);

    scanf(" %c", &op); 

   

    // Performing operations using if-else
    if (op == '+') {
        result1 = num1 + num2;
        printf("%lf", result1);
    } 
    else if (op == '-') {
        result2 = num1 - num2;
        printf("%lf", result2);
    } 
    else if (op == '*') {
        result3 = num1 * num2;
        printf("0.6%lf", result3);
    } 
    else if (op == '/') {
        if (num2 != 0) { // Prevent division by zero
            result4 = num1 / num2;
            printf("%lf", result4);
        } else {
            printf("error");
        }
    } 
    else {
        printf("Invalid operator");
    }

    return 0;
}
