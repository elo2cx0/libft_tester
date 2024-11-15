/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:52:28 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/15 17:56:17 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft_tester.h"

static void	memmove_our();
static void	memmove_orig();

/* Main function that tests ft_memmove(). As usual, it prints the standard
   test header, then launches tests of our implementation of the memmove()
   function, followed by the same tests for the original memmove() function
   from Glibc, to be able to compare their results. Finally, it prints the
   standard footer stub that visually indicates the end of testing */
void	memmove_test()
{
	const char	funcname[] = "ft_memmove";

	print_test_header(funcname);
	printf("ft_memmove():\n");
	memmove_our();
	printf("true memmove() from LibC:\n");
	memmove_orig();
	print_test_footer();
}

/* It launches tests of our own memmove() implementation. We color
   function name yellow to make it visually more noticeable */
static void	memmove_our()
{
	char		recv_buf[64];
	char		src_buf[] = "we are testing memmove";

	printf("%sft_memmove%s(recv_buf, \"%s\", strlen(src_buf)+1):\n",
		   YELLOW,
		   WHITE,
		   src_buf);
	ft_memmove(recv_buf, src_buf, strlen(src_buf) + 1);
	printf("\t\trecv_buf = \"%s\"\n", recv_buf);
	printf("\t\t");
	print_bytes(recv_buf, sizeof(recv_buf));
}

/* It launches tests of the original memmove() function */
static void	memmove_orig()
{
	char		recv_buf[64];
	char		src_buf[] = "we are testing memmove";

	printf("%smemmove%s(recv_buf, \"%s\", strlen(src_buf)+1):\n",
		   YELLOW,
		   WHITE,
		   src_buf);
	memmove(recv_buf, src_buf, strlen(src_buf) + 1);
	printf("\t\trecv_buf = \"%s\"\n", recv_buf);
	printf("\t\t");
	print_bytes(recv_buf, sizeof(recv_buf));
}
