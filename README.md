# Libft
This project is a recreation of the C standard library. Used for future WeThinkCode_ projects done in C.

# Getting started
Run 'make'
`$ make`
This will compile all the functions into a `libft.a` library

Compile the included `main.c` file or create your own
`$ gcc -Werror -Wall -Wextra main.c -o main libft.a`

Run the `main` progam created
`$ ./main`

If all goes well, you should see an output comparing the C standard library functions with the ones found here, e.g.:

``|******ft_atoi******|``
`String value = 98993489, Int value = 98993489`
`String value = tutorialspoint.com, Int value = 0`

|******ft_memcmp******|
str2 is less than str1

|******ft_memcpy******|
Before memcpy dest = Helloooo!!
After memcpy dest = http://www.tutorialspoint.com

|******ft_putchar******|
ABCDEFGHIJKLMNOPQRSTUVWXYZ

|******ft_putchar_fd******|
ABCDEFGHIJKLMNOPQRSTUVWXYZ

|******ft_putendl******|
Silence! I kill you!

|******ft_putendl_fd******|
TESTED HERE!

|******ft_putstr******|
tutorialspoint

|******ft_putstr_fd******|
tutorialspoint

|******ft_strclr******|

String before strclr: tutorialspoint
String after strclr: 

|******ft_strdup******|
Final duplicated string: Tutorials Point

|******ft_strncmp******|
str2 is less than str1

|******ft_strncpy******|
Final copied string: This is tu

|******ft_strsplit******|
hello
fellow
students

|******ft_strsub******|
Hello

|******ft_memccpy******|
After memccpy buff2 = string with�mnopqrstuvwxyz
After ft_memccpy buff1 = string with�mnopqrstuvwxyz

|******ft_strlcat******|
ft_strlcat's buff: there is no stars in the sky
strlcat's buff: there is no stars in the sky

|******ft_memmove******|
Before memmove dest1 = oldstring, src = newstring
After memmove dest1 = newstring, src = newstring
After ft_memmove dest2 = newstring, src = newstring

|******ft_strstr******|
The strstr substring is: MZIRIBMZP
The ft_strstr substring is: MZIRIBMZP

|******ft_strcmp******|
|1|
|1|
