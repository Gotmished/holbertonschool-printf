# _printf
This is our own attempt to replicate the function ```printf```.

**Prototype:** ```int _printf(const char *, ...);```

## Description
Prints arguments to standard output according to a format string. The format string contains zero or more directives, and the directives specify how the arguments are converted. Returns a count of the number of characters printed excluding the null byte, writing the count to **stdout**.

## Synopsis
```#include "main.h"```

```_printf("Format string %<conversion specifier>", argument);```

## Conversion Specifiers
* ```c``` - For characters
* ```s``` - For strings
* ```i``` - For integers
* ```d``` - For decimal integers
* ```%``` - No argument is converted. The complete specification is '%%'

## Examples
**Character:**
* Input: ```_printf("The authors' initials are %c%c & %c%c\n", 'L', 'H', 'H', 'R');```
* Output: ```The authors' initials are LH & HR```

**String:**
* Input: ```_printf("Insert string here: %s\n", "Hello, world!");```
* Output: ```Insert string here: Hello, world!```

**Integer:**
* Input: ```_printf("I would like to buy %i apples, please\n", 8);```
* Output: ```I would like to buy 8 apples, please```

**Decimal:**
* Input: ```_printf("%d\n", 94007);```
* Output:  ```94007```

## File Descriptions
* **_printf.c:** - contains the  fucntion ```_printf```.
* **_putchar.c:** - contains the function ```_putchar```. This function which writes a character to stdout.
* **main.h:** - contains the prototypes of functions used by ```_printf```.
* **man_3_printf:** - the manual page for our ```_printf``` function.
* **conv_d.c:** - contains a function to convert a numeric argument to an int. Calls the print_d function with the int as input, and returns the count from from the function.
* **print_char.c:** - contains a function to handle the 'c' conversion specifier, and print chars.
* **print_str.c:** - contains a function to handle the 's' conversion specifier, and print strings.
* **print_digit.c:** - contains a function to handle the 'd' and 'i' conversion specifiers, and print integers.

## Authors
[Luke Hackett](https://github.com/lhack-jpeg)
[Hamish Ross](https://github.com/Gotmished)
