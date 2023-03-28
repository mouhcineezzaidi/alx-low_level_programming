#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
{int _atoi(char *s) {
    int sign = 1, num = 0;
    while (*s != '\0') {
        if (*s == '-') {
            sign *= -1;
        } else if (*s >= '0' && *s <= '9') {
            num = num * 10 + (*s - '0');
        } else if (*s == '+') {
            // do nothing
        } else {
            // non-numeric character
            break;
        }
        s++;
    }
    return sign * num;
}
