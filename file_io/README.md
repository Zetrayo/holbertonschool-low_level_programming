# file_io

This project is to understand how files work

## Project Tests

This project was tested using these compilation flags :
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

This project was subjected to multiple tests using the main.c files which we included here:

Input 0:
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
```

Output 0:
```c
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
```

Input 1:
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
```

Output 1:
```c
-> 1)
```

Input 2:
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
```

Output 2:
```c
> "
-> 1)
```


## Files

|File |Description |
|---------------------|------------------------------------------------------------------------------|
|0-read_textfile.c | function that reads a text file and prints it to the POSIX standard output.|
|1-create_file.c | function that creates a file. |
|2-append_text_to_file.c | function that appends text at the end of a file. |
|3-cp.c | program that copies the content of a file to another file. |
|main.h | File containing all necessary includes and prototypes |

## Contributors

This project was made by : José Puertas

## Special Mention

# Holberton School

This project was made possible by Holberton School