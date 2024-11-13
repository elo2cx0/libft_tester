#include "include/libft_tester.h"

static void	isalnum_our();
static void	isalnum_orig();

/* Main function that tests ft_isalnum(), launching both tests of our own
   implementation and the same tests of the original isalnum() from Glibc,
   to be able to compare their results */
void	isalnum_test()
{
	char const	funcname[] = "ft_isalnum";

	print_test_header(funcname);
	printf("ft_isalnum():\n");
	isalnum_our();
	printf("true isalnum() from LibC:\n");
	isalnum_orig();
	print_test_footer();
}

/* It launches tests of our own isalnum() implementation. We color
   function name yellow to make it visually more noticeable */
static void	isalnum_our()
{
    printf("\t%sft_isalnum%s('\\r') = %d\n", YELLOW, WHITE, ft_isalnum('\r'));
    printf("\t%sft_isalnum%s('0') = %d\n", YELLOW, WHITE, ft_isalnum('0'));
    printf("\t%sft_isalnum%s('A') = %d\n", YELLOW, WHITE, ft_isalnum('A'));
    printf("\t%sft_isalnum%s('a') = %d\n", YELLOW, WHITE, ft_isalnum('a'));
    printf("\t%sft_isalnum%s('b') = %d\n", YELLOW, WHITE, ft_isalnum('b'));
    printf("\t%sft_isalnum%s('Z') = %d\n", YELLOW, WHITE, ft_isalnum('Z'));
    printf("\t%sft_isalnum%s('z') = %d\n", YELLOW, WHITE, ft_isalnum('z'));
    printf("\t%sft_isalnum%s('1') = %d\n", YELLOW, WHITE, ft_isalnum('1'));
    printf("\t%sft_isalnum%s('9') = %d\n", YELLOW, WHITE, ft_isalnum('9'));
    printf("\t%sft_isalnum%s('\\t') = %d\n", YELLOW, WHITE, ft_isalnum('\t'));
    printf("\t%sft_isalnum%s(EOF) = %d\n", YELLOW, WHITE, ft_isalnum(EOF));
}

/* It launches tests of the original isalnum() function */
static void	isalnum_orig()
{

    printf("\t%sisalnum%s('\\r') = %d\n", YELLOW, WHITE, isalnum('\r'));
    printf("\t%sisalnum%s('0') = %d\n", YELLOW, WHITE, isalnum('0'));
    printf("\t%sisalnum%s('A') = %d\n", YELLOW, WHITE, isalnum('A'));
    printf("\t%sisalnum%s('a') = %d\n", YELLOW, WHITE, isalnum('a'));
    printf("\t%sisalnum%s('b') = %d\n", YELLOW, WHITE, isalnum('b'));
    printf("\t%sisalnum%s('Z') = %d\n", YELLOW, WHITE, isalnum('Z'));
    printf("\t%sisalnum%s('z') = %d\n", YELLOW, WHITE, isalnum('z'));
    printf("\t%sisalnum%s('1') = %d\n", YELLOW, WHITE, isalnum('1'));
    printf("\t%sisalnum%s('9') = %d\n", YELLOW, WHITE, isalnum('9'));
    printf("\t%sisalnum%s('\\t') = %d\n", YELLOW, WHITE, isalnum('\t'));
    printf("\t%sisalnum%s(EOF) = %d\n", YELLOW, WHITE, isalnum(EOF));
}
