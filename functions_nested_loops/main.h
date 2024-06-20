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

int print_alphabet10(void)
{
int abc, i;
char eol;
abc = 97;
eol = '\n';
i = 0;
while (i < 10)
{
while (abc < 123)
{
write(1, &abc, 1);
abc++;
}
write(1, &eol, 1);
i++;
}
return (0);
}