# _printf

An implementation of the printf function in C!


## Requirements for this project

- Code must comply with the [Betty](https://github.com/holbertonschool/Betty) style and document checks.
- Compile code using flags: `-Wall`, `-Werror`, `-Wextra`, `-pedantic`, `-Wno-format`
- Cannot use global variables.
- Restricted to no more than 5 functions per file.
- Function prototypes should be included in header file `main.h`
- Header files should be include guarded.
- Authorized functions and macros:
..* `write` (`man 2 write`)
..* `malloc` (`man 3 malloc`)
..* `free` (`man 3 free`)
..* `va_start` (`man 3 va_start`)
..* `va_end` (`man 3 va_end`)
..* `va_copy` (`man 3 va_copy`)
..* `va_arg` (`man 3 va_arg`)


## File Descriptions

- `main.h`: Header file which contains `<stdarg.h>` `<stdio.h>` `<string.h>` `<stdlib.h>` `<unistd.h>`, struct `format` definition, and all function prototypes.
- `_printf.c`: Main printf function
- `tools.c`: Helper functions for general use, including `str_len` to find string length, and `_putchar` that calls the `write` function to print an entire buffer.
- `checks_formats`: A functions to Check if there is a format specifier or not. 
- `formats_functions.c`: Functions stored within our struct `format` array, which handles char, string, %, int, and unsigned int.


## Team

*Amal Cholo* - [Github](https://github.com/ivy-515)
