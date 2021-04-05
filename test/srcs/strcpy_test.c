/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:59:32 by cisis             #+#    #+#             */
/*   Updated: 2021/04/05 15:59:52 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasmtest.h"

static int		strcpy_test(const char *src)
{
	char *dst;

	dst = (char*)malloc((ft_strlen((char*)src) + 1) * sizeof(char));
	if (dst == NULL)
		return (1);
	printf("TEST STRING =\t\"%s\"\n", src);
	ft_strcpy(dst, src);
	printf("COPIED STR =\t\"%s\"\n", dst);
	free(dst);
	return (0);
}

int				execute_strcpy_test(void)
{
	printf("===---STRCPY TEST---===\n");
	strcpy_test("this is a source string");
	printf(DELIMITER);
	strcpy_test("ANOTHER TEST");
	printf(DELIMITER);
	strcpy_test("YO wHaT'S CRaCKiNg");
	printf(DELIMITER);
	strcpy_test("");
	printf("=======================\n");
	return (0);
}
