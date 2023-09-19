#include <stdio.h>

/*
* Main - The program to calculate basic arithmetics
* @var_num_a @var_num_b: Integers to be experimented On
* Return: It returns 0 always
*/

int main(void)
{
    int var_num_a = 12, var_num_b = 5;

    printf("We have two variable numbers %d, %d \n", var_num_a, var_num_b);

    printf("\nThis is the addition of the two variable numbers together\n");
    printf("> %i \n", var_num_a + var_num_b);

    printf("\nThis is the subtraction of the two variable numbers together\n");
    printf("> %i \n", var_num_a - var_num_b);

    printf("\nThis is the multiplication of the two variable numbers together\n");
    printf("> %i \n", var_num_a * var_num_b);

    printf("\nThis is the formatted result of the division between the two variable numbers\n");
    printf("> %d \n", var_num_a / var_num_b);
    
    return (0);
}