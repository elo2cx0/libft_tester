/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_regular.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:41 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/15 17:58:24 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft_tester.h"
#include "../include/strlcpy.h"

static void	regular_test(char const *funcname,
						 int ntest,
						 char const *src,
						 size_t size);

void	strlcpy_regular_tests(char const *funcname)
{
	regular_test(funcname, 1, "just some text", 64);
	regular_test(funcname, 2, "just some text", 10);
	regular_test(funcname, 3, "just some text", 1);
	regular_test(funcname, 4, "just some text", 0);
	regular_test(funcname, 5, "lorem ipsum dolor sit amet", 0);
}

/* It's a common test case */
static void	regular_test(char const *funcname,
						 int ntest,
						 char const *src,
						 size_t size)
{
	size_t	BUF_SIZE = 64;
	char	dst[BUF_SIZE];

	printf("\t%d. ", ntest);
	strlcpy_test_helper(funcname, dst, src, size);
}
