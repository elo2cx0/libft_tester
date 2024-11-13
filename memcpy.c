/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:52:17 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:52:20 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft_tester.h"

static void	memcpy_our();
static void	memcpy_orig();

/* Main function that tests ft_memcpy(). As usual, it prints the standard
   test header, then launches tests of our implementation of the memcpy()
   function, followed by the same tests for the original memcpy() function
   from Glibc, to be able to compare their results. Finally, it prints the
   standard footer stub that visually indicates the end of testing */
void	memcpy_test()
{
	const char	funcname[] = "ft_memcpy";

	print_test_header(funcname);
	printf("ft_memcpy():\n");
	memcpy_our();
	printf("true memcpy() from LibC:\n");
	memcpy_orig();
	print_test_footer();
}

/* It launches tests of our own memcpy() implementation. We color
   function name yellow to make it visually more noticeable
   rptr - pointer to the result produced by memcpy */
static void	memcpy_our()
{
	char	recv_buf[32];
	char	src_buf[22];
	void	*rptr;

	strlcpy(src_buf, "we are testing memcpy", 22);
	memset(recv_buf, 0x43, sizeof(recv_buf));
	rptr = ft_memcpy(recv_buf, src_buf, strlen(src_buf) + 1);
	printf("\t1. %sft_memcpy%s(recv_buf, src_buf,"
	"strlen(src_buf) + 1) = %p\n", YELLOW, WHITE, rptr);
	printf("\t\trecv_buf = \"%s\"\n", recv_buf);
	printf("\t\t");
	print_bytes(recv_buf, sizeof(recv_buf) + 10);
}

/* It launches tests of the original memcpy() function */
static void	memcpy_orig()
{
	char	recv_buf[32];
	char	src_buf[22];
	void	*rptr;

	strlcpy(src_buf, "we are testing memcpy", 22);
	memset(recv_buf, 0x43, sizeof(recv_buf));
	rptr = memcpy(recv_buf, src_buf, strlen(src_buf) + 1);
	printf("\t1. %smemcpy%s(recv_buf, src_buf,"
	"strlen(src_buf) + 1) = %p\n", YELLOW, WHITE, rptr);
	printf("\t\trecv_buf = \"%s\"\n", recv_buf);
	printf("\t\t");
	print_bytes(recv_buf, sizeof(recv_buf) + 10);
}
