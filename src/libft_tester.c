/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:51:25 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/15 17:53:30 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft_tester.h"

void	launch_tester()
{
	test_glibc_funcs();	
	test_addit_funcs();
	test_linked_list();
}

/* It launches tests of our implementation of the original Glibc functions */
void	test_glibc_funcs()
{
	isalpha_test();
	isdigit_test();
	isalnum_test();
	isascii_test();
	isprint_test();
	strlen_test();
	memset_test();
	bzero_test();
	memcpy_test();
	memmove_test();
	strlcpy_test();
	strlcat_test();
	/*toupper_test();
	tolower_test();
	strchr_test();
	strrchr_test();
	strncmp_test();
	memchr_test();
	memcmp_test();
	strnstr_test();
	atoi_test();
	calloc_test();
	strdup_test();*/
}

/* It launches tests of the additional functions we've been asked to implement */
void	test_addit_funcs()
{
	/*substr_test();
	strjoin_test();
	strtrim_test();
	split_test();
	itoa_test();
	strmapi_test();
	striteri_test();
	putchar_fd_test(put_smth_func_arr);
	putstr_fd_test(put_smth_func_arr);
	putendl_fd_test(put_smth_func_arr);
	putnbr_fd_test(put_smth_func_arr);*/
}

/* It launches test of our singly linked list implementation */
void	test_linked_list()
{
	//linked_list_test();
}
