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
abc = 123;
while (abc > 97)
{
putchar (abc);
abc--;
}
putchar ('\n');
return (0);
}
