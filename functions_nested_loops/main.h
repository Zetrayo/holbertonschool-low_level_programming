#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void times_table(void);
int jack_bauer(void);
void _putchar(int r);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
int add(int a, int b);

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
char copy;
if (n < 0)
{
n = n * -1;
}
digi = n % 10;
if (digi == 0)
{
copy = '0';
}
else if (digi == 1)
{
copy = '1';
}
else if (digi == 2)
{
copy = '2';
}
else if (digi == 3)
{
copy = '3';
}
else if (digi == 4)
{
copy = '4';
}
else if (digi == 5)
{
copy = '5';
}
else if (digi == 6)
{
copy = '6';
}
else if (digi == 7)
{
copy = '7';
}
else if (digi == 8)
{
copy = '8';
}
else if (digi == 9)
{
copy = '9';
}

write(1, &copy, 1);
return (digi);
return (0);
}

int jack_bauer(void)
{
int a, b, c, d;
for (a = 0; a <= 2; a++)
{
for (b = 0; b <= 9; b++)
{
if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(58);
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
}
}
}
}
return (0);
}

int add(int a, int b)
{
int yes;
yes = a + b;
return (yes);
return (0);
}

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}


void times_table(void)
{
int x, y, z, u, d;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z > 9)
{
u = z % 10;
d = (z - u) / 10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (y != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
}
_putchar('\n');
}
}