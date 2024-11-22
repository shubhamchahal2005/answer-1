#include <stdio.h>

int main() {
    int num1, num2, choice;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Display options for operation
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform operation based on user choice
    switch(choice) {
        case 1:
            printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            if(num2 != 0) {
                printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Performing square of the first number: %d^2 = %d\n", num1, num1 * num1);
    }

    return 0;
}
