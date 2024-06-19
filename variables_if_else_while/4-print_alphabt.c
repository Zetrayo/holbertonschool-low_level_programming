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
if (abc == 101 || abc == 113)
{
abc++;
}
putchar (abc);
abc++;
}
putchar ('\n');
return (0);
}
