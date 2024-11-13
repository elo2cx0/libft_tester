/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:43:35 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:43:36 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft_tester.h"

static void	isdigit_our();
static void	isdigit_orig();

/* Main function that tests ft_isdigit(), launching both tests of our own
   implementation and the same tests of the original isdigit() from Glibc,
   to be able to compare their results */
void	isdigit_test()
{
	char const	funcname[] = "ft_isdigit";

	print_test_header(funcname);
	printf("ft_isdigit():\n");
	isdigit_our();
	printf("true isdigit() from LibC:\n");
	isdigit_orig();
	print_test_footer();
}

/* It launches tests of our own isdigit() implementation. We color
   function name yellow to make it visually more noticeable */
static void	isdigit_our()
{
    printf("\t%sft_isdigit%s('\\r') = %d\n", YELLOW, WHITE, ft_isdigit('\r'));
    printf("\t%sft_isdigit%s('0') = %d\n", YELLOW, WHITE, ft_isdigit('0'));
    printf("\t%sft_isdigit%s('A') = %d\n", YELLOW, WHITE, ft_isdigit('A'));
    printf("\t%sft_isdigit%s('a') = %d\n", YELLOW, WHITE, ft_isdigit('a'));
    printf("\t%sft_isdigit%s('b') = %d\n", YELLOW, WHITE, ft_isdigit('b'));
    printf("\t%sft_isdigit%s('Z') = %d\n", YELLOW, WHITE, ft_isdigit('Z'));
    printf("\t%sft_isdigit%s('z') = %d\n", YELLOW, WHITE, ft_isdigit('z'));
    printf("\t%sft_isdigit%s('1') = %d\n", YELLOW, WHITE, ft_isdigit('1'));
    printf("\t%sft_isdigit%s('9') = %d\n", YELLOW, WHITE, ft_isdigit('9'));
    printf("\t%sft_isdigit%s('\\t') = %d\n", YELLOW, WHITE, ft_isdigit('\t'));
    printf("\t%sft_isdigit%s(EOF) = %d\n", YELLOW, WHITE, ft_isdigit(EOF));
}

/* It launches tests of the original isdigit() function */
static void	isdigit_orig()
{
    printf("\t%sisdigit%s('\\r') = %d\n", YELLOW, WHITE, isdigit('\r'));
    printf("\t%sisdigit%s('0') = %d\n", YELLOW, WHITE, isdigit('0'));
    printf("\t%sisdigit%s('A') = %d\n", YELLOW, WHITE, isdigit('A'));
    printf("\t%sisdigit%s('a') = %d\n", YELLOW, WHITE, isdigit('a'));
    printf("\t%sisdigit%s('b') = %d\n", YELLOW, WHITE, isdigit('b'));
    printf("\t%sisdigit%s('Z') = %d\n", YELLOW, WHITE, isdigit('Z'));
    printf("\t%sisdigit%s('z') = %d\n", YELLOW, WHITE, isdigit('z'));
    printf("\t%sisdigit%s('1') = %d\n", YELLOW, WHITE, isdigit('1'));
    printf("\t%sisdigit%s('9') = %d\n", YELLOW, WHITE, isdigit('9'));
    printf("\t%sisdigit%s('\\t') = %d\n", YELLOW, WHITE, isdigit('\t'));
    printf("\t%sisdigit%s(EOF) = %d\n", YELLOW, WHITE, isdigit(EOF));
}
