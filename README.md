# libft

## ABOUT

This is the very first project inside 42's core curriculum. The goal is to learn more about standard C functions and explore how they work by implementing them from scratch. The finished project is a custom library that can be reused in later projects.

More details about this project and its implementation can be found in the attatched [**subject file**](./subject.pdf)

## NOTE

Functions marked with an aterisk (*) are not part of the standard C library (libc). These are custom functions implemented as a part of the libft project.

## MANDATORY

### 1. Characters functions:

| Function | Description |
| :- | :- |
| `ft_isalpha` | Tests for an aplhabetical character. |
| `ft_isdigit` | Tests whether a character is a decimal digit. |
| `ft_isalnum` | Tests for an alphanumeric character. |
| `ft_isascii` | Checks for a valid ASCII set character. |
| `ft_isprint` | Tests whether a character is printable. |
| `ft_toupper` | Converts a lower-case character to upper-case. |
| `ft_tolower` | Converts an upper-case character to lower-case. |

### 2. String functions:

| Function | Description |
| :- | :- |
| `ft_strlen` | Finds the length of a given string. |
| `ft_strlcpy` | Size-bounded string copying. |
| `ft_strlcat` | Size-bounded string concatenation. |
| `ft_strchr` | Finds the first occurence of a character in a string. |
| `ft_strrchr` | Finds the last occurence of a character in a string. |
| `ft_strncmp` | Compares the first 'n' characters of two strings. |
| `ft_strnstr` | Finds the first occurence of a substring within first 'n' characters. |
| `ft_substr` | Extracts a substring from a given string. |
| `ft_strjoin` | Concatenates two strings into a new string (with malloc). |
| `ft_strtrim` | Trims the beginning and end of a string with a specified set of characters. |
| `ft_split` | Splits a string into an array of substrings based on a delimiter character. |
| `ft_strmapi` | Creates a new string by applying a function to each character of a string. |
| `ft_striteri` | Applies a function to each character of a string. |

### 3. Memory functions:

| Function | Description |
| :- | :- |
| `ft_calloc` | Allocates memory and initializes each block with a default value. |
| `ft_memset` | Sets the first 'n' bytes of memory to a given value. |
| `ft_bzero` | Sets the first 'n' bytes of memory to zero. |
| `ft_memcpy` | Copies 'n' bytes of memory (ignores memory overlaps) |
| `ft_memmove` | Copes 'n' bytes of memory (handles memory overlaps) |
| `ft_memchr` | Scans the first 'n' bytes of memory for the first occurence of a given value. |
| `ft_memcmp` | Compares the first 'n' bytes of two areas in memory |
| `ft_strdup` | Create a copy of a string (with malloc) |

### 4. Numerical functions:

| Functions | Description |
| :- | :- |
| `ft_atoi` | Converts an ASCII string to an integer value. |
| `ft_itoa` | Converts an integer to a valid ASCII string. |

### 5. File descriptor functions:

| Functions | Description |
| :- | :- |
| `ft_putchar_fd` | Outputs a character to the given file descriptor. |
| `ft_putstr_fd` | Outputs a string to the given file descriptor. |
| `ft_putend_fd` | Outputs a string followed by a new line to the given file descriptor. |
| `ft_putnbr_fd` | Outputs an integer to the given file descriptor. |

## BONUS

| Functions | Description |
| :- | :- |
| `ft_lstnew` | Creates a new linked-list (with malloc). |
| `ft_lstadd_front` | Adds a new node to the beginning of a list. |
| `ft_lstadd_back` | Adds a new node to the end of a list. |
| `ft_lstsize` | Calculates the number of nodes of a list. |
| `ft_lstlast` | Finds the last node of a list. |
| `ft_lstdelone` | Deletes a node from a list (with free) |
| `ft_lstclear` | Deletes all sequential nodes from a list. |
| `ft_lstiter` | Apply a function to each node of a list. |
| `ft_lstmap` | Create a new list by applying a function to each node. |
