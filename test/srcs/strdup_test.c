/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:00:00 by cisis             #+#    #+#             */
/*   Updated: 2021/04/05 16:00:12 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasmtest.h"

static int		strdup_test(const char *src)
{
	char *dst;

	printf("TEST STRING =\t\"%s\"\n", src);
	dst = ft_strdup(src);
	if (dst == NULL)
		return (1);
	printf("COPIED STR =\t\"%s\"\n", dst);
	free(dst);
	return (0);
}

int				execute_strdup_test(void)
{
	printf("===---STRDUP TEST---===\n");
	strdup_test("this is a source string");
	printf("+---------------------+\n");
	strdup_test("ANOTHER TEST");
	printf("+---------------------+\n");
	strdup_test("YO wHaT'S CRaCKiNg");
	printf("+---------------------+\n");
	strdup_test("");
	printf("=======================\n");
	return (0);
}
