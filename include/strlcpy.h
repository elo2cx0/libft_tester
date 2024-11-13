#ifndef STRLCPY_H
#define STRLCPY_H

void	strlcpy_regular_tests(char const *funcname);
void	strlcpy_special_tests(char const *funcname);
void	strlcpy_test_helper(char const *funcname,
							char *dst,
							char const *src,
							size_t size);

#endif
