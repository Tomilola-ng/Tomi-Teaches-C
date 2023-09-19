#include <stdio.h>

/*
* Main - The Program that loops over a giving number to then print "You printed this __ times" with a line break
* Return: It returns ) always
*/

int main(void)
{
    int var_num, counter;

    var_num = 4;

    for ( counter = 0; counter < var_num; counter++)
    {
        printf("You printed this %d times \n", 4);
    }

    return (0);
}