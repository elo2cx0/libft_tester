#include "include/libft_tester.h"
#include "include/strlcat.h"

static void	special_test_1(const char *funcname,
						   int ntest,
						   char const *src,
						   size_t size);
static void	special_test_2(char const *funcname,
						   int ntest,
						   char const *src,
						   size_t size);
static void	special_test_3(char const *funcname,
						   int ntest,
						   char const *src,
						   size_t size);
static void	special_test_4(char const *funcname,
						   int ntest,
						   char const *src,
						   size_t size);

void	strlcat_special_tests(char const *funcname)
{
	char src[] = " of the muse of the dark";

	special_test_1(funcname, 12, src, 10);
	special_test_2(funcname, 13, src, strlen(src) + 1);
	special_test_3(funcname, 14, src, strlen(src) + 1);
	special_test_4(funcname, 15, src, strlen(src) + 1);
}

static void	special_test_1(char const *funcname,
						   int ntest,
						   char const *src,
						   size_t size)
{
	size_t	BUF_SIZE = 64;
	char	dst[BUF_SIZE];
	size_t	ret;

	printf("\n\tLet's see what will happen if the original"
	"dst string is longer than dstsize\n");

	strlcpy(dst, "You - but the voice", BUF_SIZE);
	printf("\t%d. ", ntest);
	strlcat_test_helper(funcname, dst, src, size);
}

static void	special_test_2(char const *funcname,
						   int ntest,
						   char const *src,
						   size_t size)
{
	size_t	BUF_SIZE = 64;
	char	dst[BUF_SIZE];
	size_t	ret;

	printf("\n\tLet's see what will happen if"
	"the original dst buffer is empty\n");
	bzero((void *)dst, BUF_SIZE);
	printf("\t%d. ", ntest);
	strlcat_test_helper(funcname, dst, src, size);
}

static void	special_test_3(char const *funcname,
						   int ntest,
						   char const *src,
						   size_t size)
{
	size_t	BUF_SIZE = 64;
	char	dst[BUF_SIZE];
	size_t	ret;

	printf("\n\tLet's see what will happen if"
	"the original src buffer is empty\n");
	bzero((void *)src, strlen(src));
	strlcpy(dst, "You - but the voice", BUF_SIZE);
	printf("\t%d. ", ntest);
	strlcat_test_helper(funcname, dst, src, size);
}

static void	special_test_4(char const *funcname,
						   int ntest,
						   char const *src,
						   size_t size)
{
	size_t	BUF_SIZE = 64;
	char	dst[BUF_SIZE];
	size_t	ret;

	bzero((void *)src, strlen(src));
	strlcpy(dst, "You - but the voice", BUF_SIZE);
	printf("\n\tLet's see what will happen if the original src buffer"
	"is empty and dstsize is greater than length of dst\n");
	printf("\t%d. ", ntest);
	strlcat_test_helper(funcname, dst, src, size);
}
