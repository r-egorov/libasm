/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:00:00 by cisis             #+#    #+#             */
/*   Updated: 2021/04/06 12:30:00 by cisis            ###   ########.fr       */
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
	printf(DELIMITER);
	strdup_test("ANOTHER TEST");
	printf(DELIMITER);
	strdup_test("YO wHaT'S CRaCKiNg");
	printf(DELIMITER);
	strdup_test("");
	printf(DELIMITER);
	strdup_test("THIS IS A VEEEEEEEEEEEEEEEEEEEEEEERY"
				"LOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
				"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
				"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
				"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
				"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
				"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
				"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
				"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
				"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOONG"
				"STRIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIING");
	printf("=======================\n\n");
	return (0);
}
