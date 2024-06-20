#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char loop;
loop = '_';
while (loop != '.')
{
write(1, &loop, 1);
if (loop == '_')
{loop = 'p'; }
else if (loop == 'p')
{loop = 'u'; }
else if (loop == 'u')
{loop = 't'; }
else if (loop == 't')
{loop = 'c'; }
else if (loop == 'c')
{loop = 'h'; }
else if (loop == 'h')
{loop = 'a'; }
else if (loop == 'a')
{loop = 'r'; }
else if (loop == 'r')
{loop = '\n'; }
else if (loop == '\n')
{loop = '.'; }
}

return (0);
}
