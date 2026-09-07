#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "arithmetic.h"

double get_input(int index);

int get_operator();



int main(void)
{
    double num1, num2;
    char operator;
    int op;
    printf("Welcome to CLI Calculator.\nAvailable operators: + - * / \nNote: Any non-numeric characters after the number will be ignored.\n");

    num1 = get_input(1);
    num2 = get_input(2);

    op = get_operator();
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
    }

    printf("The result is %lf\n", result);

    return 0;
}

double get_input(int index)
{
    double inp;
    int res = 0;

    while (res == 0){
        printf("Enter number %d: ", index);
        res = scanf("%lf", &inp);
        if (res == EOF)
        {
            puts("\nNo more input, exiting program.");
            exit(0);
        }
        while(getchar() != '\n');
    }
    return inp;

}

int get_operator()
{
    bool res = false;
    char op;
    int op_ascii;

    while (res == false)
    {
        printf("Choose operator: ");

        if (scanf("%c", &op) == EOF){
            puts("\nNo more input, exiting program.");
            exit(0);
        }

        op_ascii = (int) op;
        if(!(op_ascii == 42 || op_ascii == 43 || op_ascii == 45 || op_ascii == 47))
        {
            while(getchar() != '\n');
        } else {return op_ascii;}
    }
}

