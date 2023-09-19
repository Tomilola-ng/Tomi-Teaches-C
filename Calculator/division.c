#include <stdio.h>

/*
* Main - Program that accepts  two variable integer. Then prints out their division
* Return: Always (0) to show success
*/

int main(void)
{
    int var_num1, var_num2, result;

    printf("Your First variable number : ");
    scanf("%d", &var_num1);
    printf("\n");

    printf("Your Second variable number : ");
    scanf("%d", &var_num2);
    printf("\n");

    printf("The division of %d and %d = %i",  var_num1, var_num2, var_num1 / var_num2);

    return (0);
}