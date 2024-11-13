/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:14 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:54:15 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft_tester.h"
#include "include/strlcat.h"

void	strlcat_test()
{
	char const	our_funcname[] = "ft_strlcat";
	char const	orig_funcname[] = "strlcat";

	print_test_header(our_funcname);
	printf("%s():\n", our_funcname);
	strlcat_regular_tests(our_funcname);
	strlcat_special_tests(our_funcname);
	printf("true %s() from LibC:\n", orig_funcname);
	strlcat_regular_tests(orig_funcname);
	strlcat_special_tests(orig_funcname);
	print_test_footer();
}

/* It's a common test case */
void	strlcat_test_helper(char const *funcname,
							char *dst,
							char const *src,
							size_t size)
{
	size_t	ret;

	cprintf(YELLOW, "%s", funcname);
	printf("(\"%s\", \"%s\", %lu):", dst, src, size);
	if (strncmp(funcname, "ft_strlcat", MAX_FUNC_NAME_LEN) == 0)
		ret = ft_strlcat(dst, src, size);
	else if (strncmp(funcname, "strlcat", MAX_FUNC_NAME_LEN) == 0)
		ret = strlcat(dst, src, size);
	else
		ret = ft_strlcat(dst, src, size);
	printf("\t\tcall returned value is: %lu", ret);
	printf("\t\tdestination buffer is: \"%s\"\n", dst);
	printf("\t\t");
	print_bytes(dst, 64);
	printf("\t\tstrlen(dst) = %lu\n", strlen(dst));
}
