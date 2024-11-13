/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_special.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:52 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:54:53 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft_tester.h"
#include "include/strlcpy.h"

static void	special_test_1(char const *funcname, int ntest, char const *src);
static void	special_test_2(char const *funcname, int ntest, char const *src);

void	strlcpy_special_tests(char const *funcname)
{
	special_test_1(funcname, 6, "just some text");
	special_test_2(funcname, 7, "just some text");
}

/* It's the first special test case */
static void	special_test_1(char const *funcname, int ntest, char const *src)
{
	char	dst[14];

	memset(dst, 0x42, sizeof(dst));
	printf("\n\tLet's try to create the situation when the return"
		   "value is equal to dstsize\n");
	printf("\tIt also means the output string has been truncated\n");
	printf("\tThe size of dst is %lu bytes\n", sizeof(dst));
	printf("\t%d. ", ntest);
	strlcpy_test_helper(funcname, dst, src, sizeof(dst));
}

/* It's the second special test case */
static void	special_test_2(char const *funcname, int ntest, char const *src)
{
	char	dst[8];

	memset(dst, 0x42, sizeof(dst));
	printf("\tLet's see what will happen in case of truncation,"
		   "when the src is greater than a sizeof destination buffer\n");
	printf("\tThe size of dst is %lu bytes\n", sizeof(dst));
	printf("\t%d. ", ntest);
	strlcpy_test_helper(funcname, dst, src, 0);
}
