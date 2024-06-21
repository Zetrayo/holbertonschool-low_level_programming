#include <unistd.h>


void _putchar(int r);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);


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

int _isalpha(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else if (c <= 90 && c >= 65)
{
return (1);
}
return (0);
}


int print_sign(int n)
{
char minus, plus, zero;
zero = '0';
minus = '-';
plus = '+';
if (n < 0)
{
write(1, &minus, 1);
return (-1);
}
else if (n == 0)
{
write(1, &zero, 1);
return (0);
}
else if (n > 0)
{
write(1, &plus, 1);
return (1);
}
return (0);
}

int _abs(int n)
{
if (n < 0)
{
n = n * -1;
return (n);
}
else if (n >= 0)
{
return (n);
}
return (0);
}

int print_last_digit(int n)
{
int digi;
if (n < 0)
{
n = n * -1;
}
digi = n % 10;
return (digi);
return (0);
}