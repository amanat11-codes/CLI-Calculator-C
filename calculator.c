#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "arithmetic.h"
#include "helpers.h"

int static inputIndex;

int main(void)
{
    double num1, num2;
    int op;
    printf("Welcome to CLI Calculator.\nAvailable operators: + - * / \nNote: Any non-numeric characters after the number will be ignored.\n");

    num1 = get_input("Enter number 1: ");
    num2 = get_input("Enter number 2: ");

    op = get_operator("Type in the operator (+ - * /): ");
    double result;

    switch(op){
        case 43:
            result = sum(num1, num2);
            break;
        case 45:
            result = difference(num1, num2);
            break;
        case 42:
            result = product(num1, num2);
            break;
        case 47:
            (num2 == 0) ? (printf("Division by 0 is not allowed\n")) : (result = quotient(num1, num2));
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    printf("The result is %lf\n", result);

    return 0;
}
