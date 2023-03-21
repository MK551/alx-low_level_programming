#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int num) {
    int last_digit = num % 10;  // Get the last digit by finding remainder of the number when divided by 10
    printf("The last digit of %d is %d\n", num, last_digit); // Print the last digit
    return last_digit;  // Return the last digit
}
