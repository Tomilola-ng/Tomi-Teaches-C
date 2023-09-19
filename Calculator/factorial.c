#include <stdio.h>

/*
* Main - A progrma that accepts an integer and calculates the factorial
* Return: Always 0 to show success
*/

int main(void)
{
    int answer = 1;
    int var_num, counter;
    const char * message = "This is the factorial : ";

    printf("Input any number : ");
    scanf("%i",  &var_num);

    if ( var_num == 1)
    {
        printf("%s 1 \n", message);
        return (0);
    }

    else if ( var_num == 0)
    {
        printf("%s 0 \n", message);
        return (0);
    }

    else
    {
        for ( counter = var_num; counter > 1; counter--)
        {
            answer = answer * counter;
        }
        printf("%s %i \n", message, answer);
    }

    return (0);
}