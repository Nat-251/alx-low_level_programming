#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> print all possible different combinations of two digits
 *
 *Return: 0 if success
*/

int main(void)
{
int ch;
int n;

for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
if (n > ch)
{
putchar(ch);
putchar(n);
if (ch != 56 || n != 57)
{
putchar(44);
putchar(32);
}
}
}
}

putchar(10); /* this is an ascii code for new line*/

return (0);
}
