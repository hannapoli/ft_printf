remove hint
headers
library

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
The va_arg, va_copy, va_end, and va_start macros provide a portable way to access the arguments to a function when the function takes a variable number of arguments. There are two versions of the macros: The macros defined in STDARG.H (#include <stdarg.h>)conform to the ISO C99 standard; the macros defined in VARARGS.H are deprecated but are retained for backward compatibility with code that was written before the ANSI C89 standard.

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
-------------------------

The decoded hint (check and del):

<!DOCTYPE html>
<html>
  <head>
    <title>503 Backend fetch failed</title>
  </head>
  <body>
    <h1>Error 503 Backend fetch failed</h1>
    <p>Backend fetch failed</p>
    <h3>Guru Meditation:</h3>
    <p>XID: 1061722135</p>
    <hr>
    <p>Varnish cache server</p>
  </body>
</html>

