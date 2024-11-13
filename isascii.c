/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:43:28 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:43:29 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft_tester.h"

/* It prints the ASCII table in two columns. The left column shows the
   output of the implementation of our isascii() function, and the right
   column shows the output of the original isascii() function from Glibc */
void	isascii_test()
{
	const char	funcname[] = "ft_isascii";
	int			i;

	print_test_header(funcname);
	printf("ft_isascii()\t\t\ttrue isascii() from LibC\n");
	i = 0;
	while (i < 256)
	{
		cprintf(YELLOW, "\t%s", funcname);
		printf("('%c'(%d)) = %d\t\t", i, i, ft_isascii(i));
		cprintf(YELLOW, "\t%s", "isascii");
		printf("('%c'(%d)) = %d\n", i, i, isascii(i));
		i++;
	}
	print_test_footer();
}
