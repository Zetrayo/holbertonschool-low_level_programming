#include <unistd.h>

int _putchar()
{
return (0);
}

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
char zero, one;
zero = '0';
one = '1';
if (c <= 122 && c >= 97)
{
write(1, &one, 1);
}
else
{
write(1, &zero, 1);
}
return (0);
}