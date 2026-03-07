#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double get_input(int index);
int get_operator();
void sum(double n1, double n2);
void difference(double n1, double n2);
void product(double n1, double n2);
void quotient(double n1, double n2);

int main(void)
{
    double num1, num2, result;
    char operator;
    int op;
    printf("Welcome to CLI Calculator.\nAvailable operators: + - * / \nNote: Any non-numeric characters after the number will be ignored.\n");

    num1 = get_input(1);
    num2 = get_input(2);

    op = get_operator();

    switch(op){
        case 43:
            sum(num1, num2);
            break;
        case 45:
            difference(num1, num2);
            break;
        case 42:
            product(num1, num2);
            break;
        case 47:
            quotient(num1, num2);
            break;
    }
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

void sum(double n1, double n2)
{
    printf("Summation: %.2f\n", n1+n2);
}

void difference(double n1, double n2)
{
    printf("Difference: %.2f\n", n1-n2);
}

void product(double n1, double n2)
{   
    printf("Product: %.2f\n", n1*n2);
}
void quotient(double n1, double n2)
{
    if (n2 == 0.0)
    {
        printf("Divison by 0 is not allowed.\n");
    } else{
        printf("Quotient: %.2f", n1/n2);
    }
}