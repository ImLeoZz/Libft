*This project has been created as part of the 42 curriculum by lemille.*

# libft

## Description

libft is a custom C library that reimplements a selection of standard libc
functions, plus additional utility functions (string, memory, output and
linked list handling). The goal is to understand how these functions work
internally, and to build a reusable toolbox for future C projects.

The library is compiled into `libft.a` using `ar`. Helper functions used to
split complex functions are declared `static` to restrict their scope to
their file.

### Library content

- **Character checks / conversion**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`,
  `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Memory**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
  `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Strings**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`,
  `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`
- **Additional functions**: `ft_substr`, `ft_strjoin`, `ft_strtrim`,
  `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- **File descriptor output**: `ft_putchar_fd`, `ft_putstr_fd`,
  `ft_putendl_fd`, `ft_putnbr_fd`
- **Linked lists**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`,
  `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`,
  `ft_lstiter`, `ft_lstmap`

### Project structure

```
.
├── libft.h
├── Makefile
├── README.md
├── ft_isalpha.c
├── ft_memset.c
└── ...
```

## Instructions

### Compilation

The Makefile compiles every source file with `cc -Wall -Wextra -Werror`
and builds `libft.a` at the root of the repository.

| Command      | Effect                                          |
|--------------|-------------------------------------------------|
| `make`         | Compile the mandatory functions into `libft.a`    |
| `make clean`   | Delete the `.o` files                             |
| `make fclean`  | Delete the `.o` files and `libft.a`                 |
| `make re`      | Full rebuild (`fclean` then `all`)                  |

### Usage

Include the header in your code:

```c
#include "libft.h"
```

Then compile your program and link it against the library:

```sh
make
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```

## Resources

### References

- `man 3 memset`, `man 3 memmove`, `man 3 strlcpy`, `man 3 strlcat`,
  `man 3 calloc`, ... : reference behaviour of the standard functions.- 
- Linked lists course (PDF), Liste Chainee / universite de batna / univ.batna : used to understand
  node structure, insertion and traversal.

### Use of AI

AI was used for educational and research purposes only:

- searching for and summarizing manuals;
- explaining concepts I did not understand (linked lists, signed vs.
  unsigned types);
- guiding my debugging with questions and hints.

All the code was written by me. AI did not write any part of the project.
