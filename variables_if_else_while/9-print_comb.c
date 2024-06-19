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
putchar (44);
putchar (32);
abc++;
}
putchar ('\n');
return (0);
}
