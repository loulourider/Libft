*This project has been created as part of the 42 curriculum by lallaire.*

# libft

## Description

**libft** is the first project of the 42 common core: building my own C
library from scratch. The goal is to re-implement a set of standard libc
functions, add some extra utility functions (strings, memory, output, linked
lists), and package everything into a static library (`libft.a`) that can be
reused in all future 42 projects.

The project teaches memory management (`malloc` / `free`), pointer
manipulation, the 42 Norm, Makefiles, and how to write clean and reusable code.

## Instructions

### Compilation

The library is compiled with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make        # builds libft.a (mandatory part)
make bonus  # builds libft.a with the linked list functions
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + make
```

### Usage

Include the header in your code:

```c
#include "libft.h"
```

Then compile and link against the library:

```bash
cc main.c -L. -lft -o my_program
```

## Library content

### Part 1 - Libc functions

Re-implementation of standard functions (same behavior as the originals):

| Category             | Functions                                                                                          |
|----------------------|----------------------------------------------------------------------------------------------------|
| Character checks     | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`                               |
| Character conversion | `ft_toupper`, `ft_tolower`                                                                         |
| String               | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory               | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`          |
| Conversion           | `ft_atoi`                                                                                          |

### Part 2 - Additional functions

| Function        | Description                                                  |
|-----------------|--------------------------------------------------------------|
| `ft_substr`     | Extracts a substring from a string                           |
| `ft_strjoin`    | Concatenates two strings into a new one                      |
| `ft_strtrim`    | Trims a set of characters from both ends of a string         |
| `ft_split`      | Splits a string into an array of strings using a delimiter   |
| `ft_itoa`       | Converts an integer to a string                              |
| `ft_strmapi`    | Applies a function to each character (returns a new string)  |
| `ft_striteri`   | Applies a function to each character (in place)              |
| `ft_putchar_fd` | Writes a character to a file descriptor                      |
| `ft_putstr_fd`  | Writes a string to a file descriptor                         |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor   |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor                       |

### Bonus - Linked lists

Functions to manipulate lists made of `t_list` nodes:

```
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function          | Description                                            |
|-------------------|--------------------------------------------------------|
| `ft_lstnew`       | Creates a new node                                     |
| `ft_lstadd_front` | Adds a node at the beginning of the list               |
| `ft_lstadd_back`  | Adds a node at the end of the list                     |
| `ft_lstsize`      | Counts the nodes in the list                           |
| `ft_lstlast`      | Returns the last node of the list                      |
| `ft_lstdelone`    | Frees one node using a deletion function               |
| `ft_lstclear`     | Deletes and frees a node and all its successors        |
| `ft_lstiter`      | Applies a function to the content of each node         |
| `ft_lstmap`       | Creates a new list by applying a function to each node |

## Technical choices

- The library is built as a static archive with `ar rcs`.
- Only `malloc`, `free` and `write` are used, as required by the subject.
- No global variables.
- Every function that allocates memory checks the result of `malloc` and
  returns `NULL` on failure, freeing anything already allocated (for example
  in `ft_split`).
- Code follows the 42 Norm (checked with `norminette`).

## Resources

### References

- `man 3 <function>`: man pages of the original libc functions
- [The C Programming Language (Kernighan & Ritchie)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [norminette (42 Norm)](https://github.com/42School/norminette)

### Use of AI

AI (Claude) was used for:

- Generating the structure and the writing of this README.
- Understanding concepts (pointers, `malloc`, static libraries with `ar`) and
  explaining bugs.

All the code of the library was written by me, and I understand every line
of it.
