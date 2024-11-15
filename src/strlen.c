/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:58 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/15 17:57:13 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft_tester.h"

static void	strlen_our();
static void	strlen_orig();

/* Main function that tests ft_strlen(), launching both tests of our own
   implementation and the same tests of the original strlen() from Glibc,
   to be able to compare their results */
void	strlen_test()
{
	char const	funcname[] = "ft_strlen";

	print_test_header(funcname);
	printf("ft_strlen():\n");
	strlen_our();	
	printf("true strlen() from LibC:\n");
	strlen_orig();
	print_test_footer();
}

/* It launches tests of our own strlen() implementation. We color
   function name yellow to make it visually more noticeable */
static void	strlen_our()
{
	char	str1[] = "urhg r849(Hht49t#*%   hr";
	char	*str2 = "Farewell, thou pathway of the free,\n"
					"For the last time thy waves I view"
					"\nBefore me roll disdainfully,\n"
					"Brilliantly beautiful and blue.";
	char	str3[32] = "";

	printf("\t1. %sft_strlen%s(str1) = %lu\n", YELLOW, WHITE, strlen(str1));
	printf("\t2. %sft_strlen%s(str2) = %lu\n", YELLOW, WHITE, strlen(str2));
	printf("\t3. %sft_strlen%s(str3) = %lu\n", YELLOW, WHITE, strlen(str3));
}

/* It launches tests of the original strlen() function */
static void	strlen_orig()
{

	char	str1[] = "urhg r849(Hht49t#*%   hr";
	char	*str2 = "Farewell, thou pathway of the free,\n"
					"For the last time thy waves I view"
					"\nBefore me roll disdainfully,\n"
					"Brilliantly beautiful and blue.";
	char	str3[32] = "";

	printf("\t1. %sstrlen%s(str1) = %lu\n", YELLOW, WHITE, strlen(str1));
	printf("\t2. %sstrlen%s(str2) = %lu\n", YELLOW, WHITE, strlen(str2));
	printf("\t3. %sstrlen%s(str3) = %lu\n", YELLOW, WHITE, strlen(str3));
}
