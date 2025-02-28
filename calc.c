#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf(" %f", &num1);

    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf(" %f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case'%':
            if(num2==0){
                printf("0 is invalid");
                return 2;
            }
            result = num1 % num2;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error! Invalid operation.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
