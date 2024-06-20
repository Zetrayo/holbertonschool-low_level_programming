#include <unistd.h>
/**
* main - Entry point
* print_alphabet - mid point
*
* Return: Always 0 (Success)
*/

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

int main(void)
{
print_alphabet();
return (0);
}
