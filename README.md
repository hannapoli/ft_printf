!!!Una vez que superes este ejercicio, podrás incluir ft_printf() en tu
libft, por lo que podrás utilizarla en futuros proyectos en C.!!!

Archivos a entregar: Makefile, *.h, */*.h, *.c, */*.c

remove readme
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

int ft_printf(char const *, ...);

Authorised functions:
malloc, free, write, va_start, va_arg, va_copy, va_end.

### Requisits:

* The reimplemented function will be compared to the original printf().

* Do not implement the management of the buffer of the original printf().

* You have to implement the following conversions: cspdiuxX%:

    * %c prints a single character.
    * %s prints a string (as defined by default in C).
    * %p the void * pointer given as an argument is printed in hexadecimal format.
    * %d prints a decimal (base 10) number.
    * %i prints an integer in base 10.
    * %u prints an unsigned decimal (base 10) number.
    * %x prints a lowercase hexadecimal (base 16) number.
    * %X prints an uppercase hexadecimal (base 16) number.
    * % % to print the percent symbol.

---------------------------
printf() returns an int to check for errors:
* (+) value = success;
* (-) value = error.

It is a variadic function (accepts a variable number of arguments instead of the fixed one). The variadic function must have at least one mandatory argument.

When someone calls the printf(), we don't know in advance how many elements the person wants to display (how many times the format specifier will be used).
-------------------
variable argument lists

Return value
va_arg returns the current argument. 
va_copy, va_start and va_end don't return values.

#include <stdarg.h>

void va_start(va_list ap, last);
type va_arg(va_list ap, type);
void va_end(va_list ap);
void va_copy(va_list dest, va_list src);


Remarks
The va_arg, va_copy, va_end, and va_start macros provide a portable way to access the arguments to a function when the function takes a variable number of arguments. There are two versions of the macros: The macros defined in <stdarg.h> conform to the ISO C99 standard.

These macros assume that the function takes a fixed number of required arguments, followed by a variable number of optional arguments. The required arguments are declared as ordinary parameters to the function and can be accessed through the parameter names. The optional arguments are accessed through the macros in STDARG.H, which sets a pointer to the first optional argument in the argument list, retrieves arguments from the list, and resets the pointer when argument processing is completed.

The C standard macros, defined in STDARG.H, are used as follows:

1 - va_start()

The va_start() macro initializes ap for subsequent use by va_arg() and va_end(), and must be called first.
The argument last is the name of the last argument before the variable argument list, that is, the last argument of which the calling function knows the type.

Because the address of this argument may be used in the va_start() macro, it should not be declared as a register variable, or as a function or an array type.

va_start sets arg_ptr to the first optional argument in the list of arguments that's passed to the function. The argument arg_ptr must have the va_list type. The argument prev_param is the name of the required parameter that immediately precedes the first optional argument in the argument list. If prev_param is declared with the register storage class, the macro's behavior is undefined. va_start must be used before va_arg is used for the first time.

2 - va_arg retrieves a value of type from the location that's given by arg_ptr, and increments arg_ptr to point to the next argument in the list by using the size of type to determine where the next argument starts. va_arg can be used any number of times in the function to retrieve arguments from the list.

va_arg()

The va_arg() macro expands to an expression that has the type and value of the next argument in the call. The argument ap is the va_list ap initialized by va_start(). Each call to va_arg() modifies ap so that the next call returns the next argument. The argument type is a type name specified so that the type of a pointer to an object that has the specified type can be obtained simply by adding a * to type.
The first use of the va_arg() macro after that of the va_start() macro returns the argument after last. Successive invocations return the values of the remaining arguments.

If there is no next argument, or if type is not compatible with the type of the actual next argument (as promoted according to the default argument promotions), random errors will occur.

If ap is passed to a function that uses va_arg(ap,type) then the value of ap is undefined after the return of that function.

3 - va_end()

Each invocation of va_start() must be matched by a corresponding invocation of va_end() in the same function. After the call va_end(ap) the variable ap is undefined. Multiple traversals of the list, each bracketed by va_start() and va_end() are possible. va_end() may be a macro or a function.

4 - va_copy()

The va_copy() macro copies the (previously initialized) variable argument list src to dest. The behavior is as if va_start() were applied to dest with the same last argument, followed by the same number of va_arg() invocations that was used to reach the current state of src.

va_copy makes a copy of a list of arguments in its current state. The src parameter must already be initialized with va_start; it may have been updated with va_arg calls, but must not have been reset with va_end. The next argument that's retrieved by va_arg from dest is the same as the next argument that's retrieved from src.

After all arguments have been retrieved, va_end resets the pointer to NULL. va_end must be called on each argument list that's initialized with va_start or va_copy before the function returns.

---------
va_start must be called before any use of va_arg - otherwise your va_list variable/table will be empty.

va_list - new object type
va_list is an object type suitable for holding the information needed by the macros va_start, va_copy, va_arg, and va_end (that you will understand in a few minutes). In other words, it is a list that will contain all the dynamic arguments.

To create a variable of this type, you will have to do it the same way as any other variable.

va_list    any_name_you_want;

// we will call it args for the next example:
va_list    args;

calling variable args:
va_arg( args,  char * )
va_arg( args, int )

va_end (args); to free memory

-------------------------
Description of how printf works:

1. Writes a character one by one until reachicg '%'.
2. When it finds a '%', it looks at the next character to define the type of the variable argument.
3. It calls the function that will show the argument of the specific type at output (e.g. 'd' for a number).
4. Repeats the previous steps until reaching the end of the string (\0).
5. Returns the final number of characters printed.

parse -> fetch args -> convert args -> assemble output and display it -> error management.

Draft code:

call different functions for each type?
using of va macros?

#include <stdarg.h>

int ft_printf(char const *, ...);

int count;
char character;

count = 0;
while (count >= 0)????
   if (character != '%')
      write()
      return count
   else (next index- type funct)
      ft_putstr() - write chars one by one
      count the chars (to add it to init count)
   return (count)?

Maybe while??? (I have to come beck to the 1st step to cont printing)

_____
read var fts:

Variadic Functions
Variadic functions are functions that accept a variable number of arguments. They provide the flexibility to work with functions where the number of inputs may not be known until runtime. This document covers the essentials of variadic functions, their applications, and best practices.

Definition
A variadic function is a function of indefinite arity, meaning it can take a varying number of arguments instead of a fixed number. In many programming languages, this is achieved by using special syntax or keywords designed to handle multiple arguments dynamically.

Syntax
int function_name(data_type variable_name, ...);

Header fileCase
Variadic functions are particularly useful in scenarios where the function's behavior needs to adapt based on the number and type of inputs provided by the user, such as formatting and logging functions #include <stdarg.h>

Type
Variadic functions can be categorized based on the types of arguments they accept:

- Homogeneous Variadic Functions: These functions accept an indefinite number of arguments, but all of the same type. - Heterogeneous Variadic Functions: These functions can accept arguments of different types.

Case
Variadic functions are particularly useful in scenarios where the function's behavior needs to adapt based on the number and type of inputs provided by the user, such as formatting and logging functions

Usage
A common use case for variadic functions is in the implementation of the printf function in C and similar functions in other languages, which need to accept an arbitrary number of arguments of various types.

printf("This is a %s with %d variadic %s.\n", "string", 2, "arguments");

Useful for printf
The printf function in C is a prime example of a variadic function, showcasing its ability to handle different types and numbers of arguments efficiently for formatted output.

Considerations
When implementing variadic functions, consider the following:

- Type Safety: Ensure that the function correctly handles the types of the provided arguments.

- Performance: Passing a large number of arguments can impact performance.

- Readability: Use variadic functions judiciously to maintain code clarity.

Implementations
Macros
va_start
- Purpose: Initializes a va_list object to be used with the va_arg and va_end macros. It must be called first before using va_arg.

- Usage: va_start(va_list ap, last_fixed_param);

- Parameters: - ap: A variable of type va_list that will be initialized to point to the first variable argument.

- last_fixed_param: The name of the last fixed parameter before the variable arguments start. This is used by va_start to locate the first variable argument.

va_arg
- Purpose: Retrieves the next argument in the parameter list of the specified type.

- Usage: type va_arg(va_list ap, type);

- Parameters:

- ap: The va_list object initialized by va_start.

- type: The type of the next argument to be retrieved. This type name must match the actual type of the argument.

- Returns: The next argument value of the specified type.

va_copy
- Purpose: Creates a copy of a va_list object. It is useful when you need to traverse the argument list more than once or in nested functions where the original va_list might be altered.

- Usage: va_copy(va_list dest, va_list src);

- Parameters:

- dest: The va_list that will be a copy of src.

- src: The va_list to be copied.

Note: After using va_copy, the copied va_list (dest) must be freed using va_end.

va_end
- Purpose: Cleans up a va_list object after it has been used. It should be called before the function returns.

- Usage: va_end(va_list ap);

- Parameters:

- ap: The va_list object that was initialized by va_start and potentially used by va_arg.

Note: Failing to call va_end can result in memory leaks or other undefined behavior.


   

