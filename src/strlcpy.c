/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:33 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/15 17:56:38 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft_tester.h"
#include "../include/strlcpy.h"

/* Main function that tests ft_strlcpy(). As usual, it prints the standard
   test header, then launches tests of our implementation of the strlcpy()
   function, followed by the same tests for the original strlcpy() function
   from Glibc, to be able to compare their results. Finally, it prints the
   standard footer stub that visually indicates the end of testing */
void	strlcpy_test()
{
	char const	our_funcname[] = "ft_strlcpy";
	char const	orig_funcname[] = "strlcpy";

	print_test_header(our_funcname);
	printf("%s():\n", our_funcname);
	strlcpy_regular_tests(our_funcname);
	strlcpy_special_tests(our_funcname);
	printf("true %s() from LibC:\n", orig_funcname);
	strlcpy_regular_tests(orig_funcname);
	strlcpy_special_tests(orig_funcname);
	print_test_footer();
}

void	strlcpy_test_helper(char const *funcname,
							char *dst,
							char const *src,
							size_t size)
{
	size_t	ret;

	cprintf(YELLOW, "%s", funcname);
	printf("(\"%s\", \"%s\", %lu):", dst, src, size);
	if (strncmp(funcname, "ft_strlcpy", MAX_FUNC_NAME_LEN) == 0)
		ret = ft_strlcpy(dst, src, size);
	else if (strncmp(funcname, "strlcpy", MAX_FUNC_NAME_LEN) == 0)
		ret = strlcpy(dst, src, size);
	else
		ret = ft_strlcpy(dst, src, size);
	printf("\t\tcall returned value is: %lu", ret);
	printf("\t\tdestination buffer is: \"%s\"\n", dst);
	printf("\t\t");
	print_bytes(dst, 64);
}
