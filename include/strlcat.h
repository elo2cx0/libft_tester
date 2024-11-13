/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:42:45 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:42:47 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLCAT_H
#define STRLCAT_H

#include <stddef.h>

void	strlcat_regular_tests(char const *funcname);
void	strlcat_special_tests(char const *funcname);
void	strlcat_test_helper(char const *funcname,
							char *dst,
							char const *src,
							size_t size);

#endif
