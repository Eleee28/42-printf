# 42_printf

## About the project

The goal of the project is to recode printf() from <stdio.h> (libc). To do this we will use variadic functions.

### Mandatory part

The prototype of the function is the following:

~~~~
int	ft_printf(const char *str, ...);
~~~~

The function has to handle the following flags.
- %c - prints a single character
- %s - prints a string
- %p - prints a pointer in hexadecimal format
- %d - prints a decimal (base 10) nummber
- %i - prints an integer in base 10
- %u - prints an unsigned decimal (base 10) number
- %x - prints a number in hexadecimal (base 16) lowercase format
- %X - prints a number in hexadecimal (base 16) uppercase format
- %% - prints a percent sign

### Bonus part

For the bonus part we have to manage the combination of several flags:

- '-' : right-padding with spaces
- '0' : left-padding with zeroes
- '.' : to indicate the precision
- '#' : adds "0x" to an hexadecimal number
- ' ' : adds one space
- '+' : adds the sign (-/+)

The flags work as follows:

~~~~
%[flags][width][.precision]type

	flags = {-0# +}
~~~~