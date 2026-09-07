#include <stdio.h>
#include "helpers.h"

double get_input(char* prompt)
{
    double inp;
    while (1)
    {
        printf("%s", prompt);
        
        if (scanf("%lf", &inp) == 1);
            break;
    }
    return inp;

}

int get_operator(char* prompt)
{
    char op;

    while(getchar() != '\n');

    while(1)
    {
        printf("%s", prompt);

        if (scanf("%c", &op) == 1)
            break;
    }
    return op;
}

