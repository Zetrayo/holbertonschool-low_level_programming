#include <unistd.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int abc;
char eol;
abc = 97;
eol = '\n';
while (abc < 123)
{
write(1, &abc, 1);
abc++;
}
write(1, &eol, 1);
return (0);
}
