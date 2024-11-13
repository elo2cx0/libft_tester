/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:43:21 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:43:22 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft_tester.h"

static void	isalpha_our();
static void	isalpha_orig();

/* Main function that tests ft_isalpha(), launching both tests of our own
   implementation and the same tests of the original isalpha() from Glibc,
   to be able to compare their results */
void	isalpha_test()
{
	char const	funcname[] = "ft_isalpha";

	print_test_header(funcname);
	printf("ft_isalpha():\n");
	isalpha_our();
	printf("true isalpha() from LibC:\n");
	isalpha_orig();
	print_test_footer();
}

/* It launches tests of our own isalpha() implementation. We color
   function name yellow to make it visually more noticeable */
static void	isalpha_our()
{
    printf("\t1.  %sft_isalpha%s('\\r') = %d\n",
		   YELLOW,
		   WHITE,
		   ft_isalpha('\r'));
    printf("\t2.  %sft_isalpha%s('0') = %d\n", YELLOW, WHITE, ft_isalpha('0'));
    printf("\t3.  %sft_isalpha%s('A') = %d\n", YELLOW, WHITE, ft_isalpha('A'));
    printf("\t4.  %sft_isalpha%s('a') = %d\n", YELLOW, WHITE, ft_isalpha('a'));
    printf("\t5.  %sft_isalpha%s('b') = %d\n", YELLOW, WHITE, ft_isalpha('b'));
    printf("\t6.  %sft_isalpha%s('Z') = %d\n", YELLOW, WHITE, ft_isalpha('Z'));
    printf("\t7.  %sft_isalpha%s('z') = %d\n", YELLOW, WHITE, ft_isalpha('z'));
    printf("\t8.  %sft_isalpha%s('1') = %d\n", YELLOW, WHITE, ft_isalpha('1'));
    printf("\t9.  %sft_isalpha%s('\\t') = %d\n",
		   YELLOW,
		   WHITE,
		   ft_isalpha('\t'));
    printf("\t10. %sft_isalpha%s(EOF) = %d\n", YELLOW, WHITE, ft_isalpha(EOF));
}

/* It launches tests of the original isalpha() function */
static void	isalpha_orig()
{

    printf("\t1.  %sisalpha%s('\\r') = %d\n",
		   YELLOW,
		   WHITE,
		   isalpha('\r'));
    printf("\t2.  %sisalpha%s('0') = %d\n", YELLOW, WHITE, isalpha('0'));
    printf("\t3.  %sisalpha%s('A') = %d\n", YELLOW, WHITE, isalpha('A'));
    printf("\t4.  %sisalpha%s('a') = %d\n", YELLOW, WHITE, isalpha('a'));
    printf("\t5.  %sisalpha%s('b') = %d\n", YELLOW, WHITE, isalpha('b'));
    printf("\t6.  %sisalpha%s('Z') = %d\n", YELLOW, WHITE, isalpha('Z'));
    printf("\t7.  %sisalpha%s('z') = %d\n", YELLOW, WHITE, isalpha('z'));
    printf("\t8.  %sisalpha%s('1') = %d\n", YELLOW, WHITE, isalpha('1'));
    printf("\t9.  %sisalpha%s('\\t') = %d\n",
		   YELLOW,
		   WHITE,
		   isalpha('\t'));
    printf("\t10. %sisalpha%s(EOF) = %d\n", YELLOW, WHITE, isalpha(EOF));
}
