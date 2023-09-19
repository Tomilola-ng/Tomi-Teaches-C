#include <stdio.h>

/*
* Main - Program that accepts  one variable integer. Then prints out it's squared
* Return: Always (0) to show success
*/

int main(void)
{
    int var_num1;

    printf("The number you will like to square : ");
    scanf("%d", &var_num1);
    printf("\n");

    printf("The Square of %d is %i",  var_num1, var_num1 * var_num1);

    return (0);
}