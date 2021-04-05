/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:59:00 by cisis             #+#    #+#             */
/*   Updated: 2021/04/05 15:59:24 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasmtest.h"

static int		strcmp_test(const char *s1, const char *s2)
{
	printf("s1 =\t\"%s\"\ns2 =\t\"%s\"\n"
			"ft_strcmp(s1, s2) =\t%d\nstrcmp(s1, s2) =\t%d\n",
			s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
	if (ft_strcmp(s1, s2) == strcmp(s1, s2))
		printf(">> +++ TEST PASSED +++ <<\n");
	else
		printf(">> --- TEST FAILED --- <<\n");
	return (0);
}

int				execute_strcmp_test(void)
{
	printf("===---STRCMP TEST---===\n");
	strcmp_test("STRING", "STRING");
	printf("+---------------------+\n");
	strcmp_test("sTRING", "STRING");
	printf("+---------------------+\n");
	strcmp_test("", "STRING");
	printf("+---------------------+\n");
	strcmp_test("", "");
	printf("+---------------------+\n");
	strcmp_test("Str", "");
	printf("=======================\n");
	return (0);
}
