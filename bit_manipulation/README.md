# bit_manipulation

This project is to understand how to bit manipulation works

## Project Tests

This project was tested using these compilation flags :
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

This project was subjected to multiple tests using the main.c files which we included here:

Input 0:
```c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
```

Output 0:
```c
1
5
0
98
402
```

Input 1:
```c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
```

Output 1:
```c
0
1
1100010
10000000000
10000000001
```

Input 2:
```c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
```

Output 2:
```c
1
1
0
```

Input 3:
```c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
```

Output 3:
```c
1056
1024
99
```

Input 4:
```c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
```

Output 4:
```c
0
0
96
```

Input 5:
```c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
```

Output 5:
```c
2
5
3
1
```


## Files

|File |Description |
|---------------------|------------------------------------------------------------------------------|
|0-binary_to_uint.c | function that converts a binary number to an unsigned int.|
|1-print_binary.c | function that prints the binary representation of a number. |
|2-get_bit.c | function that returns the value of a bit at a given index. |
|3-set_bit.c | function that sets the value of a bit to 1 at a given index. |
|4-clear_bit.c | function that sets the value of a bit to 0 at a given index. |
|5-flip_bits.c | function that returns the number of bits you would need to flip to get from one number to another. |
|main.h | File containing all necessary includes and prototypes |

## Contributors

This project was made by : José Puertas

## Special Mention

# Holberton School

This project was made possible by Holberton School