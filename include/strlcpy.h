/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:43:00 by dchernik          #+#    #+#             */
/*   Updated: 2024/11/13 19:43:01 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLCPY_H
#define STRLCPY_H

void	strlcpy_regular_tests(char const *funcname);
void	strlcpy_special_tests(char const *funcname);
void	strlcpy_test_helper(char const *funcname,
							char *dst,
							char const *src,
							size_t size);

#endif
