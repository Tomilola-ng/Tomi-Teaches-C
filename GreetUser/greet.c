#include <stdio.h>

/*
* Main - A program that prompts user with "🤖 Hi, write the 3 first letters in your name : "
*   then prints out "Hello 👋  ___"
* Return: 0 Always, if successful
*/

int main(void)
{
    char var_letter1, var_letter2, var_letter3;

    printf("Hi, write the 3 first letters in your name : ");
    scanf("%c %c %c", &var_letter1, &var_letter2, &var_letter3);
    printf("Hello %c %c%c :)",  var_letter1, var_letter2, var_letter3);

    return (0);
}