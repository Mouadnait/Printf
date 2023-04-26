#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int n1, n2;

    _printf("%d\n", 1024);
    printf("%d\n", 1024);

    _printf("%d\n", -1024);
    printf("%d\n", -1024);

    _printf("%         d\n", 2147483647);
    printf("%         d\n", 2147483647);

    _printf("%      d\n", -2147483648);
    printf("%      d\n", -2147483648);

    _printf("%  %\n");
    printf("%  %\n");

    _printf("%d\n", 0);
    printf("%d\n", 0);

    _printf("%d\n", INT_MAX);
    printf("%d\n", INT_MAX);

    _printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);

    _printf("There is %d bytes in %d KB\n", 1024, 1);
    printf("There is %d bytes in %d KB\n", 1024, 1);

    _printf("%d - %d = %d\n", 1024, 2048, -1024);
    printf("%d - %d = %d\n", 1024, 2048, -1024);

    _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

    _printf("%i\n", INT_MAX);
    printf("%i\n", INT_MAX);

    _printf("%i\n", INT_MIN);
    printf("%i\n", INT_MIN);

    _printf("There is %i bytes in %i KB\n", 1024, 1);
    printf("There is %i bytes in %i KB\n", 1024, 1);

    _printf("%i - %i = %i\n", 1024, 2048, -1024);
    printf("%i - %i = %i\n", 1024, 2048, -1024);

    _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

    _printf("%d == %i\n", 1024, 1024);
    printf("%d == %i\n", 1024, 1024);

    _printf("iddi%diddiiddi\n", 1024);
    printf("iddi%diddiiddi\n", 1024);

    _printf("There is %i bytes in %i KB\n", 1024, 1);
    printf("There is %i bytes in %i KB\n", 1024, 1);

    _printf("%i - %i = %i\n", 1024, 2048, -1024);
    printf("%i - %i = %i\n", 1024, 2048, -1024);

    _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

    _printf("%d == %i\n", 1024, 1024);
    printf("%d == %i\n", 1024, 1024);

    _printf("iddi%diddiiddi\n", 1024);
    printf("iddi%diddiiddi\n", 1024);

    _printf("-----------------------------------\n");
    n1 = printf("%  \n");
    n2 = _printf("% \n");
    printf("%d %d\n", n1, n2);

    _printf("-----------------------------------\n");
    n1 = printf("%  r\n");
    n2 = _printf("%  r\n");
    printf("%d %d\n", n1, n2);

    _printf("-----------------------------------\n");
    n1 = printf("%c%d%s%i%   %%rhello world\n", 'a', 'b', 426, "Mohamed", 14);
    n2 = _printf("%c%d%s%i%   %%rhello world\n", 'a', 'b', 426, "Mohamed", 14);
    printf("%d %d\n", n1, n2);

    return (0);
}
