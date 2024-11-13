/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common_tester.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:42:05 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:42:06 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_TESTER_H
#define COMMON_TESTER_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

/* GL_COLOR_FLAG    - global color flag. if 1 cprintf() function is going to color
				      it's output, otherwise cprintf() works as usual printf();
   TEST_HD_FT_LEN   - the length of the stub line (both for header and footer)
					  which helps to visually distinguish one test from another
					  more easily;
   TEST_HD_FT_SYM   - the symbol is used to draw the stub line (the string that
					  determines the beginning and the end of each test);
   MAX_TESTS_NUM    - maximum number of tests;
   MAX_TEST_STR_LEN - maximum string length in each test that operates with
					  a string. */
#define RESET_COLOR			"\033[0m"
#define BLACK				"\033[30m"
#define RED					"\033[31m"
#define GREEN				"\033[32m"
#define YELLOW				"\033[33m"
#define BLUE				"\033[34m"
#define MAGENTA				"\033[35m"
#define CYAN				"\033[36m"
#define WHITE				"\033[37m"
#define GL_COLOR_FLAG		1
#define MAX_ERR_BUF_SIZE	256
#define TEST_HD_FT_LEN		50
#define TEST_HD_FT_SYM		'#'
#define	MAX_SUBSTRS_NUM		200
#define	MAX_SUBSTR_LEN		100
#define MAX_TESTS_NUM		128
#define MAX_TEST_STR_LEN	256

/* cprintf() - colored printf 
   cperror() - colored perror
   alloc_str_2d() - allocates dynamic memory for an array of strings */
void	cprintf(const char *color, const char *format, ...);
void	cperror(const char *color, const char *format, ...);
void	print_test_header(const char *funcname);
void	print_test_footer();
char	**alloc_str_2d(int strsnum, int strlen);
void	print_bytes(void *ptr, int size);
void	print_arr_int(int *arr, int size);
int		max(int v1, int v2);
int		min(int v1, int v2);

#endif
