*This project has been created as part of the 42 curriculum by edmvarda*

## Description

ft_printf is a reimplementation of the standard C `printf` function. The project focuses on understanding variadic functions and formatted output handling in C.
The goal is to reproduce the essential behavior of `printf` using only the allowed functions, while respecting the 42 Norm and compilation rules.

This implementation supports the mandatory conversions required by the subject and can be reused in future 42 school assignments and projects.

The library covers:

### Mandatory conversions
Reimplementation of the following format specifiers:

- `%c` — prints a single character  
- `%s` — prints a string  
- `%p` — prints a pointer address in hexadecimal format  
- `%d` — prints a decimal (base 10) number  
- `%i` — prints an integer in base 10  
- `%u` — prints an unsigned decimal number  
- `%x` — prints a number in lowercase hexadecimal  
- `%X` — prints a number in uppercase hexadecimal  
- `%%` — prints a percent sign  

All functions are written in C, follow the 42 Norm, compile with `-Wall -Wextra -Werror`, and do not use global variables. Only allowed functions are used (`write`, `va_start`, `va_arg`, `va_end`). Memory management is safe, and the function returns the total number of printed characters.

## Resources

C Standard Library Documentation
Variadic functions reference: man 3 va_start, man 3 va_arg, man 3 va_end
Hexadecimal printing and integer conversions references
AI assistance was used only for drafting explanations, debugging guidance, and formatting documentation.


## Project Rules
- Written in **C**
- Follows **42 Norm**
- No global variables
- Static helper functions allowed
- Only allowed functions used
- No memory leaks

## Instructions:
``` bash 
make
