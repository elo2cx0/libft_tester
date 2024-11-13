#include "include/libft_tester.h"

static void	bzero_our();
static void	bzero_orig();

/* Main function that tests ft_bzero(). As usual, it prints the standard
   test header, then launches tests of our implementation of the bzero()
   function, followed by the same tests for the original bzero() function
   from Glibc, to be able to compare their results. Finally, it prints the
   standard footer stub that visually indicates the end of testing */
void	bzero_test()
{
	const char	funcname[] = "ft_bzero";

	print_test_header(funcname);
	printf("ft_bzero():\n");
	bzero_our();
	printf("true bzero() from LibC:\n");
	bzero_orig();
	print_test_footer();
}

/* It launches tests of our own bzero() implementation. We color
   function name yellow to make it visually more noticeable */
static void	bzero_our()
{
	char	buf[32];

	printf("\t1. %sft_bzero%s(buf, 32):\n", YELLOW, WHITE);
	ft_bzero(buf, 32);
	printf("\t\t");
	print_bytes(buf, 40);
}

/* It launches tests of the original bzero() function */
static void	bzero_orig()
{
	char	buf[32];

	printf("\t1. %sbzero%s(buf, 32):\n", YELLOW, WHITE);
	bzero(buf, 32);
	printf("\t\t");
	print_bytes(buf, 40);
}
