1. triple NORM check!
2. remove this doc from 42 git!
3. check the folder contents according to the pdf requirements (remove ./a.out)
4. comment main
5. header in every file ✅
6. check names ✅
7. check dict and makefile ✅
8. call makefile, re. fclean ... 

last: git add ., commit, push


Archivos a entregar: 
Makefile, _.h, _/_.h, _.c, _/_.c

# Reimplementing print_f

#### Task: 
write a library that containns a function ft_printf() that immitates the original printf().

#### The prototype is:

int ft_printf(char const \*, ...);

#### Authorised functions:
malloc, free, write, va_start, va_arg, va_copy, va_end.

### Requisits:

- The reimplemented function will be compared to the original printf().

- Do not implement the management of the buffer of the original printf().

- You have to implement the following conversions:

  - %c: prints a single character.
  - %s: prints a string (as defined by default in C).
  - %p: the void pointer given as an argument is printed in hexadecimal format.
  - %d: prints a decimal (base 10) number.
  - %i: prints an integer in base 10.
  - %u: prints an unsigned decimal (base 10) number.
  - %x: prints a lowercase hexadecimal (base 16) number.
  - %X: prints an uppercase hexadecimal (base 16) number.
  - % %: to print the percent symbol.

### Understanding how printf works:

1. Writes a character one by one until reachicg '%'.
2. When it finds a '%', it looks at the next character to define the type of the variable argument.
3. It calls the function that will show the argument of the specific type at output.
4. It repeats the previous steps until reaching the end of the string (\0).
5. Finally, it returns the final number of characters printed.

I imagine the printf() flow as following: 
parse -> fetch arguments -> convert arguments -> assemble output and display it -> error management.

printf() returns an int to check for errors:

- (+) value = success;
- (-) value = error.

## Variadic function and its arguments

The *printf()* in C is a *variadic function*: it accepts a variable number of arguments instead of the fixed one. The variadic function must have at least one mandatory argument.

Until someone calls the printf(), we don't know in advance how many elements the user wants to display (how many times the format specifier will be used).

va_list in <stdarg.h> library is a list that contains all the dynamic arguments.

void *va_start*(va_list arg_ptr, last) - starts the list and connects it to the last fixed argument.
type *va_arg*(va_list arg_ptr, type)
void *va_end*(va_list arg_ptr) - frees the used memory.

void *va_copy*(va_list dest, va_list src)

*arg_ptr* is a variable that is initialized by va_start to point to the first variable argument.

These macros assume that the function takes a fixed number of required arguments, followed by a variable number of optional arguments.
The pointer is set to the first optional argument in the argument list, the arguments from the list are retrieved, and the pointer is reset when argument processing is completed.

The *va_arg()* retrieves a value of type from the argument list.
In other words, it retrieves the location that's given by arg_ptr, and increments arg_ptr to point to the next argument in the list by using the size of type to determine where the next argument starts. Each call to va_arg() modifies arg_ptr so that the next call returns the next argument.

The *va_copy()* macro copies the (previously initialized) variable argument list src to dest. The behavior is as if va_start() were applied to dest with the same last argument, followed by the same number of va_arg() invocations that was used to reach the current state of src.

It makes a copy of a list of arguments in its current state. The src parameter must already be initialized with va_start; it may have been updated with va_arg calls, but must not have been reset with va_end.
The next argument that's retrieved by va_arg from dest is the same as the next argument that's retrieved from src. After all arguments have been retrieved, va_end resets the pointer to NULL. va_end must be called on each argument list that's initialized with va_start or va_copy before the function returns.

It is useful when you need to traverse the argument list more than once or in nested functions where the original va_list might be altered.

Each invocation of va_start() must be matched by a corresponding invocation of *va_end()* in the same function. After the call va_end(arg_ptr) the variable arg_ptr is undefined. Multiple traversals of the list, each bracketed by va_start() and va_end() are possible.
