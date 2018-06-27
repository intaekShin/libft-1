# libft
### Score
##### Mandatory
100 / 100
##### Bonus
25 / 25
***
### About
At 42, students are not allowed to use library functions.
My challenge was to create a personal C library.

Allowed functions are `malloc` `free` & `write`. Everything else is forbidden for the mandatory submission.
I have since expanded my library to include additional useful functions including get_next_line & ft_printf. I have also reorganised the source files.

### Compilation
To compile, run `make`
This will compile two libraries; **libft.a** and **ft_printf.a**. Compile projects with the libraries to use the functions.
```console
gcc -Wall -Werror -Wextra main.c libft.a ft_printf.a
```
