#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    char choice;

    do {
        // Simple UI header
        printf("\n=====================================\n");
        printf("           CALCULATOR         \n");
        printf("=====================================\n");

        // Input section
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &op);
        printf("Enter second number: ");
        scanf("%f", &b);

        // Processing section
        switch (op) {
            case '+':
                result = a + b;
                printf("\nResult: %.2f + %.2f = %.2f\n", a, b, result);
                break;

            case '-':
                result = a - b;
                printf("\nResult: %.2f - %.2f = %.2f\n", a, b, result);
                break;

            case '*':
                result = a * b;
                printf("\nResult: %.2f × %.2f = %.2f\n", a, b, result);
                break;

            case '/':
                if (b == 0)
                    printf("\nError: Division by zero not allowed!\n");
                else {
                    result = a / b;
                    printf("\nResult: %.2f ÷ %.2f = %.2f\n", a, b, result);
                }
                break;

            case '%':
                if ((int)b == 0)
                    printf("\nError: Modulus by zero not allowed!\n");
                else
                    printf("\nResult: %d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
                break;

            default:
                printf("\nInvalid operator! Try again.\n");
        }

        // Ask for another calculation
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\n-------------------------------------\n");
    printf("    Thank you for using Calculator!  \n");
    printf("-------------------------------------\n");

    return 0;
}

