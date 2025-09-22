# Libft Projects

This repository contains three foundational C projects commonly developed in the 42 curriculum:

- **libft**: A custom implementation of standard C library functions and additional utility functions.
- **ft_printf**: A simplified version of the `printf` function supporting various format specifiers.
- **get_next_line**: A function to read lines from a file descriptor one at a time.

These projects are designed to improve understanding of C, memory management, linked lists, variadic functions, and file I/O.

---

## Table of Contents

- [Libft](#libft)
- [ft_printf](#ft_printf)
- [get_next_line](#get_next_line)

---

## Libft

`libft` is a custom library that reimplements standard C library functions and includes additional utilities:

**Implemented functions include:**

- Memory manipulation: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_memdup`
- String handling: `ft_strlen`, `ft_strdup`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_strmapi`, `ft_striteri`, `ft_strndup`
- Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_ishex`, `ft_toupper`, `ft_tolower`
- Conversions: `ft_atoi`, `ft_itoa`, `ft_hextoi`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- Linked list utilities (bonus): `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## ft_printf

`ft_printf` is a custom implementation of the C `printf` function supporting:

- Format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- Handles variable arguments via `stdarg.h`
- Returns the number of characters printed

**Example:**

```c
#include "ft_printf/incl/ft_printf.h"

int main(void)
{
    int len = ft_printf("Hello %s! Number: %d\n", "World", 42);
    ft_printf("Printed %d characters\n", len);
    return 0;
}
```
## get_next_line

`get_next_line` reads a file descriptor line by line. Each call returns the next line including the newline character, or `NULL` at `EOF`.

**Example:**

```c
#include "get_next_line/incl/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("example.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
```

