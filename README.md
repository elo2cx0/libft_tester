# **Libft Tester**

## **Project Title**

This simple console program performs various tests on the Libft library,
which is the first project of the 42 Common Core. At this stage of its
development, the program launches each function located inside the tested
Libft library folder and passes different parameters to its input. Then,
the program does the same but for the corresponding 'original' function
in Glibc library (or, in some cases, for a function in a C library used by
FreeBSD), allowing the user to visually assess how close their implementation
is to the reference one.

This simple tester was developed primarily for learning purposes, though it
can be used or improved upon by other participants in the 42 program.

## **Installation and Usage**

1. The libft\_tester folder must be placed in the root directory of
   the Libft library being tested, for it to work correctly.

------------------------------------------------------------------------------------------------------
2. We must be inside libft\_tester directory so 'pwd' command must show
   us something like this:
```bash
$ pwd
 .../parent_dir/libft/libft_tester
```

The most common example of directory arrangement is shown below:
![Possible directory arrangement.](/img/directory_arrangement.png "Possible directory arrangement")

------------------------------------------------------------------------------------------------------
3. Then 'make' utility has to be run:
```bash
$ make
```
      
The Makefile located in the libft\_tester/ directory first builds the Libft
static library, producing libft.a in the parent libft/ directory. Then, it
builds the Libft library tester, producing libft\_tester.a in the current
directory.

------------------------------------------------------------------------------------------------------
4. Now we can start testing our Libft by invoking the launch\_tester()
function. For instance, we can create a small program, tester.c, located
in the libft\_tester/ directory that launches the tester:

```c
// tester.c
#include "include/libft_tester.h" 

int main(void)
{
	launch_tester();
	return(0);
}
```

------------------------------------------------------------------------------------------------------
5. Now libft\_tester.c may be compiled and launched:
```bash
$ cc -Wall -Wextra -Werror tester.c libft_tester.a ../libft.a -o tester
$ ./tester
```

------------------------------------------------------------------------------------------------------

We included string.h and linked strlcpy.o and strlcat.o of FreeBSD system for testing
strlcpy() and strlcat() functions respectively. To be able to compare the original
functions with our own implementation.

## **License**

This work is published under the terms of ** [42 Unlicense](https://github.com/gcamerli/42unlicense) **.
