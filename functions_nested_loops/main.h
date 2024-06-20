#include <unistd.h>

void _putchar(int r);


int print_alphabet(void)
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

int print_alphabet_x10(void)
{
int abcd, i;
char eol;
i = 0;
abcd = 97;
eol = '\n';
while (i != 10)
{
while (abcd < 123)
{
write(1, &abcd, 1);
abcd++;
}
write(1, &eol, 1);
i++;
abcd = 97;
}
return (0);
}

int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
return (0);
}