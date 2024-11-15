/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:42:27 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/15 16:00:23 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TESTER_H
#define LIBFT_TESTER_H

#include "../common_tester/common_tester.h"
#include "../libbsd/bsd_string.h"
#include "../../libft.h"

#include <ctype.h>
#include <locale.h>
#include <limits.h>
#include <stdint.h>

#define FT_STR				"ft_"
#define MAX_FUNC_NAME_LEN	20

/* In this structure we store all possible arguments that may have a put_smth
   (putchar_fd_test, putstr_fd_test, ...) function. There are 3 different
   possible argument types that can accept the first argument of the tested
   function (symbol, string, number). There is only one possible type of
   argument that can accept the second argument - it's fd (I/O descriptor).

   sumbol[MAX_TESTS_NUM] - the size of this array is the maximum possible
						   number of tests;
   string				 - no more than MAX_TESTS_NUM strings of length
						   not exceeding MAX_TEST_STR_LEN bytes; */
typedef struct
{
	struct first_arg
	{
		char	symbol[MAX_TESTS_NUM];
		char	**string;
		int		number[MAX_TESTS_NUM];
	} first;
	struct second_arg
	{
		int		fd[MAX_TESTS_NUM];
	} second;
} put_smth_args;

/* Function definitions */
void	launch_tester();
void	test_glibc_funcs();
void	test_addit_funcs();
void	test_linked_list();

void	substr_test();
void	substr_test_helper(const char *funcname,
						   int ntest,
						   char const *s,
						   unsigned int start,
						   size_t len);

void	strjoin_test();
void	strjoin_test_helper(const char *funcname,
							int ntest,
							char const *tstr1,
							char const *tstr2);

void	strtrim_test();
void	strtrim_test_helper(const char *funcname,
							int ntest,
							char const *str,
							char const *set);

void	split_test();
int		split_test_helper(const char *funcname,
						  int ntest,
						  char const *str,
						  char delim);

void	itoa_test_helper(const char *funcname, int ntest, int num);
void	itoa_test();

char	func_for_strmapi(unsigned int pos, char symbol);
void	strmapi_test();

void	func_for_striteri(unsigned int pos, char *ptr);
void	striteri_test();

void	putchar_fd_test(void **func_arr);
void	putstr_fd_test(void **func_arr);
void	putendl_fd_test(void **func_arr);	
void	putnbr_fd_test(void **func_arr);
void	put_smth_test_helper(const char *funcname,
							 void **func_arr,
							 int find,
							 put_smth_args *args,
							 int tests_num);

void    isalpha_test();
void	isdigit_test();
void	isalnum_test();
void	isascii_test();
void	isprint_test();
void	strlen_test();
void	memset_test();
void	bzero_test();
void	memcpy_test();
void	memmove_test();
void	strlcpy_test();
void	strlcat_test();
void	tolower_test();
void	toupper_test();
void	strchr_test();
void	strrchr_test();
void	strncmp_test();
void	memchr_test();
void	memcmp_test();
void	strnstr_test();
void	atoi_test();
void	calloc_test();
void	strdup_test();

void	free_node(void *ptr);
void	singly_linked_list_test();

#endif
