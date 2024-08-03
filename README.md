# libft

## ABOUT

This is the very first project in 42's core curriculum. The goal is to learn more about standard C functions and explore how they work by implementing them from scratch. The finished project is a custom library that can be reused in later projects.

More details about this project and its implementation can be found in the attached [**subject file**](./subject.pdf)

## MANDATORY

### 1. Characters functions:

| Function | Description |
| :- | :- |
| [`ft_isalpha`](./ft_isalpha.c) | Tests for an alphabetical character. |
| [`ft_isdigit`](./ft_isdigit.c) | Tests whether a character is a decimal digit. |
| [`ft_isalnum`](./ft_isalnum.c) | Tests for an alphanumeric character. |
| [`ft_isascii`](./ft_isascii.c) | Checks for a valid ASCII set character. |
| [`ft_isprint`](./ft_isprint.c) | Tests whether a character is printable. |
| [`ft_toupper`](./ft_toupper.c) | Converts a lower-case character to upper-case. |
| [`ft_tolower`](./ft_tolower.c) | Converts an upper-case character to lower-case. |

### 2. String functions:

| Function | Description |
| :- | :- |
| [`ft_strlen`](./ft_strlen.c) | Finds the length of a given string. |
| [`ft_strlcpy`](./ft_strlcpy.c) | Size-bounded string copying. |
| [`ft_strlcat`](./ft_strlcat.c) | Size-bounded string concatenation. |
| [`ft_strchr`](./ft_strchr.c) | Finds the first occurrence of a character in a string. |
| [`ft_strrchr`](./ft_strrchr.c) | Finds the last occurrence of a character in a string. |
| [`ft_strncmp`](./ft_strncmp.c) | Compares the first 'n' characters of two strings. |
| [`ft_strnstr`](./ft_strnstr.c) | Finds the first occurrence of a substring within first 'n' characters. |
| [`ft_substr`](./ft_substr.c) | Extracts a substring from a given string. |
| [`ft_strjoin`](./ft_strjoin.c) | Concatenates two strings into a new string (with malloc). |
| [`ft_strtrim`](./ft_strtrim.c) | Trims the beginning and end of a string with a specified set of characters. |
| [`ft_split`](./ft_split.c) | Splits a string into an array of substrings based on a delimiter character. |
| [`ft_strmapi`](./ft_strmapi.c) | Creates a new string by applying a function to each character of a string. |
| [`ft_striteri`](./ft_striteri.c) | Applies a function to each character of a string. |

### 3. Memory functions:

| Function | Description |
| :- | :- |
| [`ft_calloc`](./ft_calloc.c) | Allocates memory and initializes each block with a default value. |
| [`ft_memset`](./ft_memset.c) | Sets the first 'n' bytes of memory to a given value. |
| [`ft_bzero`](./ft_bzero.c) | Sets the first 'n' bytes of memory to zero. |
| [`ft_memcpy`](./ft_memcpy.c) | Copies 'n' bytes of memory (ignores memory overlaps) |
| [`ft_memmove`](./ft_memmove.c) | Copies 'n' bytes of memory (handles memory overlaps) |
| [`ft_memchr`](./ft_memchr.c) | Scans the first 'n' bytes of memory for the first occurrence of a given value. |
| [`ft_memcmp`](./ft_memcmp.c) | Compares the first 'n' bytes of two areas in memory |
| [`ft_strdup`](./ft_strdup.c) | Creates a copy of a string (with malloc) |

### 4. Numerical functions:

| Function | Description |
| :- | :- |
| [`ft_atoi`](./ft_atoi.c) | Converts an ASCII string to an integer value. |
| [`ft_itoa`](./ft_itoa.c) | Converts an integer to a valid ASCII string. |

### 5. File descriptor functions:

| Function | Description |
| :- | :- |
| [`ft_putchar_fd`](./ft_putchar_fd.c) | Outputs a character to the given file descriptor. |
| [`ft_putstr_fd`](./ft_putstr_fd.c) | Outputs a string to the given file descriptor. |
| [`ft_putendl_fd`](./ft_putendl_fd.c) | Outputs a string followed by a new line to the given file descriptor. |
| [`ft_putnbr_fd`](./ft_putnbr_fd.c) | Outputs an integer to the given file descriptor. |

## BONUS

| Functions | Description |
| :- | :- |
| [`ft_lstnew`](./ft_lstnew.c) | Creates a new linked-list (with malloc). |
| [`ft_lstadd_front`](./ft_lstadd_front.c) | Adds a new node to the beginning of a list. |
| [`ft_lstadd_back`](./ft_lstadd_back.c) | Adds a new node to the end of a list. |
| [`ft_lstsize`](./ft_lstsize.c) | Calculates the number of nodes of a list. |
| [`ft_lstlast`](./ft_lstlast.c) | Finds the last node of a list. |
| [`ft_lstdelone`](./ft_lstdelone.c) | Deletes a node from a list (with free) |
| [`ft_lstclear`](./ft_lstclear.c) | Deletes all nodes from a list. |
| [`ft_lstiter`](./ft_lstiter.c) | Apply a function to each node of a list. |
| [`ft_lstmap`](./ft_lstmap.c) | Create a new list by applying a function to each node. |
