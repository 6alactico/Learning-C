#include <stdio.h>

int main()
{
    int number1, number2;
    char operator;
    int result;

    printf("Input two numbers> ");
    scanf("%d%d", &number1, &number2);

    printf("Enter an operator (+, -, *, /)> ");
    scanf(" %c", &operator);  // Note the space before %c to avoid issues with reading the char

    // Perform the operation based on the input operator
    if (operator == '+')
        result = number1 + number2;
    else if (operator == '-')
        result = number1 - number2;
    else if (operator == '*')
        result = number1 * number2;
    else if (operator == '/')
    {
        if (number2 != 0)  // Ensure there's no division by zero
            result = number1 / number2;
        else
        {
            printf("Error! Division by zero.\n");
            return 1;
        }
    }
    else
    {
        printf("Invalid operator!\n");
        return 1;
    }

    // Output the result of the operation
    printf("The result is: %d\n", result);

    return 0;
}
