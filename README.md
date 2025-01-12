!!!Una vez que superes este ejercicio, podrás incluir ft_printf() en tu
libft, por lo que podrás utilizarla en futuros proyectos en C.!!!
remove libft??? i use the custom functs for this project.
triple NORM check!

Archivos a entregar: Makefile, _.h, _/_.h, _.c, _/_.c

remove readme
comment main
header
library
git add, commit, push
commented main with my and original func to check!

Se puede usar libft
Si tu proyecto permite el uso de la libft, deberás copiar su fuente y sus Makefile
asociados en un directorio libft con su correspondiente Makefile. El Makefile
de tu proyecto debe compilar primero la librería utilizando su Makefile, y después
compilar el proyecto.

# Reimplementing print_f

Task: write a library that containns a function ft_printf() that immitates the original printf().

The prototype is:

int ft_printf(char const \*, ...);

Authorised functions:
malloc, free, write, va_start, va_arg, va_copy, va_end.

### Requisits:

- The reimplemented function will be compared to the original printf().

- Do not implement the management of the buffer of the original printf().

- You have to implement the following conversions: cspdiuxX%:

  - %c: prints a single character.
  - %s: prints a string (as defined by default in C).
  - %p: the void \* pointer given as an argument is printed in hexadecimal format.
  - %d: prints a decimal (base 10) number.
  - %i: prints an integer in base 10.
  - %u: prints an unsigned decimal (base 10) number.
  - %x: prints a lowercase hexadecimal (base 16) number.
  - %X: prints an uppercase hexadecimal (base 16) number.
  - % %: to print the percent symbol.

---

printf() returns an int to check for errors:

- (+) value = success;
- (-) value = error.

It is a variadic function (accepts a variable number of arguments instead of the fixed one). The variadic function must have at least one mandatory argument.

## Until someone calls the printf(), we don't know in advance how many elements the user wants to display (how many times the format specifier will be used).

va_list is a list that will contain all the dynamic arguments.

Return value
va_arg returns the current argument.
va_copy, va_start and va_end don't return values.

#include <stdarg.h>

void va_start(va_list arg_ptr, last);
type va_arg(va_list arg_ptr, type);
void va_copy(va_list dest, va_list src);
void va_end(va_list arg_ptr);

arg_ptr is a variable that is initialized by a_start to point to the first variable argument.

These macros assume that the function takes a fixed number of required arguments, followed by a variable number of optional arguments.
The pointer is set to the first optional argument in the argument list, the arguments from the list are retrieved, and the pointer is reset when argument processing is completed.

1 - va_start()

The va_start() macro must be called first and it initializes arg_ptr for subsequent use by va_arg() and va_end().
The argument last is the name of the last fixed argument before the variable argument list (the last argument of which the calling function knows the type).
va_start sets arg_ptr to the first optional argument in the list of arguments that's passed to the function.

2 - va_arg()

The va_arg retrieves a value of type from the argument list.
In other words, it retrieves the location that's given by arg_ptr, and increments arg_ptr to point to the next argument in the list by using the size of type to determine where the next argument starts.
The va_arg() macro expands to an expression that has the type and value of the next argument in the call.
The argument arg_ptr is the va_list arg_ptr initialized by va_start().
Each call to va_arg() modifies arg_ptr so that the next call returns the next argument.
The first use of the va_arg() macro after that of the va_start() macro returns the argument after last.
Successive invocations return the values of the remaining arguments.
If arg_ptr is passed to a function that uses va_arg(arg_ptr,type) then the value of arg_ptr is undefined after the return of that function.

3 - va_copy()

The va_copy() macro copies the (previously initialized) variable argument list src to dest.
The behavior is as if va_start() were applied to dest with the same last argument, followed by the same number of va_arg() invocations that was used to reach the current state of src.

It makes a copy of a list of arguments in its current state. The src parameter must already be initialized with va_start; it may have been updated with va_arg calls, but must not have been reset with va_end.
The next argument that's retrieved by va_arg from dest is the same as the next argument that's retrieved from src.
After all arguments have been retrieved, va_end resets the pointer to NULL. va_end must be called on each argument list that's initialized with va_start or va_copy before the function returns.

It is useful when you need to traverse the argument list more than once or in nested functions where the original va_list might be altered.

4 - va_end()

Each invocation of va_start() must be matched by a corresponding invocation of va_end() in the same function.
After the call va_end(arg_ptr) the variable arg_ptr is undefined. Multiple traversals of the list, each bracketed by va_start() and va_end() are possible.

---

Description of how printf works:

1. Writes a character one by one until reachicg '%'.
2. When it finds a '%', it looks at the next character to define the type of the variable argument.
3. It calls the function that will show the argument of the specific type at output (e.g. 'd' for a number).
4. Repeats the previous steps until reaching the end of the string (\0).
5. Returns the final number of characters printed.

parse -> fetch args -> convert args -> assemble output and display it -> error management.
