## README.md FILE FOR THE 0x11. C - printf PROJECT

The printf() function project is a team work project to create a functional printf() function that works similarly as the original C printf() function.

The printf() function is one of the ouput functions that prints an output to the standard output, i.e. the termial screen. It prints according to the specified format and other arguments passed to it. Hence the name printf() which means "Print formatted".

The printf() function is contained in the stdio.h header file.
The printf() function is to print formatted output to the terminal screen
The printf() function looks like this in nature
	> **int printf(const char *format, ...);***

The printf() has a return value of type int
When successful the printf() returns the number of characters excluding the terminating null byte '\0', else returns a negative value in case of error
Different kinds of arguments are given to the printf() function.
The format pointer arguments points to a format string
FORMAT STRING is the string to be printed on the terminal screen by the printf()
function. The format string is supposed to be a const
The printf() as a variadic function, takes in one mandatory argument which is the format string.
Format string can contain placeholders for data types to be printed. eg. char, float, int
The number of extra arguments passed to printf depends on the number of placeholders contained in the format string.
A complete printf format placeholder looks like this
		%[flags][width][.precision][length]specifier

A format specifier is a character precededb y the "%" character that tells printf what kind of data to expect as an argument.

Below is a description of the various format specifiers for the printf() function:

|Specifier| Description |
|--|--|
|**c**| The int argument is converted to char and the result character is written.
|**d, i**|The int argument is converted to a decimal notation.
|**f**|The int argument isconverted to a floating point.
|**o, u, x, X**|The argument is converted to unsigned octal (**o**), unsigned decimal (**u**), or unsigned hexamedical (**x** and **X**) notation.
|**s**|Expected pointer to type char * to an array of characters. The characters are then printed up to terminal screen. Prints a null-terminated string
|**p**|Print an address.
|**%%**|Prints a single '%'.

## Tasks in the Project
In this project, we are to work as a team to accomplish the following tasks with their respective details

## Task 0
_0.I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.
	* Prototype: int _printf(const char *format, ...);
	* Returns: the number of characters printed (excluding the null byte used to end output to strings)
	* write output to stdout, the standard output stream
	* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
		* c
		* s
		* %
	* You don’t have to reproduce the buffer handling of the C library printf function
	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers

## Task 1
_1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:
	* d
	* i
	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers

#Advanced Tasks:
## Task 2
_2. With a face like mine, I do better in print
Handle the following custom conversion specifiers:
	* b: the unsigned int argument is converted to binary

## Task 3
_3. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:
	* u
	* o
	* x
	* X
	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers

## Task 4
_4. Nothing in fine print is ever good new.
Use a local buffer of 1024 chars in order to call write as little as possible.

## Task 5
_5. My weakness is wearing too much leopard print
Handle the following custom conversion specifier:
	* S : prints the string.
	* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

## Task 6
_6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p.
	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers

## Task 7
_7. The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:
	* +
	* space
	* #

## Task 8
_8. Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:
	* l
	* h
	* Conversion specifiers to handle: d, i, u, o, x, X

## Task 9
_9. Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers

## Task 10
_10. The negative is the equivalent of the composer's score, and the print the performance.
Handle the precision for non-custom conversion specifiers..

## Task 11
_11. It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

## Task 12
_12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

## Task 13
_13. Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
	* r : prints the reversed string

## Task 14
_14. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:
	* R: prints the rot13'ed string
