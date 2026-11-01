/*
 * CodeAlpha - C Programming Internship
 * Task 1: Basic Calculator
 *
 * Performs addition, subtraction, multiplication and division
 * using a switch-case for operation selection.
 *
 * Compile: gcc calculator.c -o calculator
 * Run:     ./calculator
 */

#include <stdio.h>

/* Clears leftover characters from the input buffer after a bad read */
static void clear_input(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main(void) {
    double num1, num2, result;
    char op;
    char again;

    printf("=== Simple C Calculator ===\n");

    do {
        printf("\nEnter first number: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input();
            continue;
        }

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        if (scanf("%lf", &num2) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input();
            continue;
        }

        switch (op) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case '-':
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case '*':
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;

            default:
                printf("Error: Invalid operator '%c'. Use +, -, * or /.\n", op);
        }

        printf("\nDo another calculation? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("Goodbye!\n");
    return 0;
}
