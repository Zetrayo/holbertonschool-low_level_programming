#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int abc;
abc = 97;
while (abc < 123)
{
putchar (abc);
abc++;
}
if (abc >= 123)
{
abc = 65;
while (abc < 91)
{
putchar (abc);
abc++;
}
}
putchar ('\n');
return (0);
}
