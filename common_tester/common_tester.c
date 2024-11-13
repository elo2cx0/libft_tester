/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:42:11 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:42:12 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common_tester.h"

/* colored printf wrapper. it has the same functionality as a regular printf()
   but also add a color to our output */
void	cprintf(const char *color, const char *format, ...)
{
	va_list args;
	va_start(args, format);

	if (GL_COLOR_FLAG)
	{
		printf("%s", color);
		fflush(stdout);
		vprintf(format, args);
		printf("%s", RESET_COLOR);
		fflush(stdout);
	}
	else
		vprintf(format, args);
	va_end(args);
}

/* colored perror wrapper */
void	cperror(const char *color, const char *format, ...)
{
	va_list args;
	va_start(args, format);
	if (GL_COLOR_FLAG)
	{
		fprintf(stderr, "%s", color);
		fflush(stderr);
		vfprintf(stderr, format, args);
		fprintf(stderr, "%s", RESET_COLOR);
		fflush(stderr);
	}
	else
		vfprintf(stderr, format, args);
	va_end(args);
}

void	print_test_header(const char *funcname)
{
	putchar('\n');
	for (int i = 0; i < TEST_HD_FT_LEN; i++)
		putchar(TEST_HD_FT_SYM);	
	putchar('\n');
	cprintf(GREEN, "TEST OF %s()\n\n", funcname);
}

void	print_test_footer()
{
	putchar('\n');
	for (int i = 0; i < TEST_HD_FT_LEN; i++)
		putchar(TEST_HD_FT_SYM);	
	printf("\n\n");
}

char	**alloc_str_2d(int strsnum, int strlen)
{
	char **ptr;

	if ((ptr = (char **)calloc(strsnum, sizeof(char *))) == NULL)
		return (NULL);
	for (int i = 0; i < strsnum; i++)
	{
		if ((ptr[i] = (char *)calloc(strlen + 1, sizeof(char))) == NULL)
			return (NULL);
	}
	return (ptr);
}

void	free_str_2d(char **ptr, int strsnum)
{
	for (int i = 0; i < strsnum; i++)
		free(ptr[i]);
	free(ptr);
}

void	print_bytes(void *ptr, int size)
{
	unsigned char	*p;
	int				i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < size)
	{
		printf("%02hhX ", p[i]);
		i++;
	}
	printf("\n");
}

void	print_arr_int(int *arr, int size)
{
	size_t	i;

	printf("{ ");
	i = 0;
	while (i < size)
	{
		printf("%d", arr[i++]);
		if (i < size - 1)
			printf(", ");
		else
			printf(" ");
	}
	puts("}\n");
}

int	max(int v1, int v2)
{
	if (v1 >= v2)
		return (v1);
	return (v2);
}

int	min(int v1, int v2)
{
	if (v1 >= v2)
		return (v2);
	return (v1);
}
