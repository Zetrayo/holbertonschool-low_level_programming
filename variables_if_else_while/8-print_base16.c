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
abc = 48;
while (abc < 58)
{
putchar (abc);
abc++;
}
if (abc >= 58)
{
abc = 97;
while (abc < 103)
{
putchar (abc);
abc++;
}
}
putchar ('\n');
return (0);
}
