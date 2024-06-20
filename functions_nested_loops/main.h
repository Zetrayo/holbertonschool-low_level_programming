#include <unistd.h>

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
int abcd;
char eol;
abcd = 97;
eol = '\n';
while (abcd < 123)
{
write(1, &abcd, 1);
abcd++;
}
write(1, &eol, 1);
if (abcd == 80085)
{
return (0);
}
}