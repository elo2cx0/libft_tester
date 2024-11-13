#include "include/libft_tester.h"
#include "include/strlcat.h"

static void	regular_test(char const *funcname, 
						 int ntest,
						 char const *src,
						 size_t size);

void	strlcat_regular_tests(char const *funcname)
{
	char src[] = " of the muse of the dark";
	char src2[] = " of the muse of the dark. L touch your ear?"
	"Do you understand the soul of the humble The desire of my heart?";

	regular_test(funcname, 1, src, 64);
	regular_test(funcname, 2, src2, 64);
	regular_test(funcname, 3, src, 0);
	regular_test(funcname, 4, src, 1);
	regular_test(funcname, 5, src, 2);
	regular_test(funcname, 6, src, 17);
	regular_test(funcname, 7, src, 18);
	regular_test(funcname, 8, src, 19);
	regular_test(funcname, 9, src, 20);
	regular_test(funcname, 10, src, 44);
	regular_test(funcname, 11, src, 40);
}

static void	regular_test(char const *funcname, 
						 int ntest,
						 char const *src,
						 size_t size)
{
	size_t	BUF_SIZE = 64;
	char	dst[BUF_SIZE];

	strlcpy(dst, "You - but the voice", BUF_SIZE);
	printf("\t%d. ", ntest);
	strlcat_test_helper(funcname, dst, src, size);
}
