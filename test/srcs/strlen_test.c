/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:00:17 by cisis             #+#    #+#             */
/*   Updated: 2021/04/05 16:00:45 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasmtest.h"

static int		strlen_test(char *str)
{
	printf("str =\t\"%s\"\nft_strlen(str) =\t%d\nstrlen(str) =\t\t%d\n",
			str, ft_strlen(str), (int)strlen(str));
	if (ft_strlen(str) == (int)strlen(str))
		printf(">> +++ TEST PASSED +++ <<\n");
	else
		printf(">> --- TEST FAILED --- <<\n");
	return (0);
}

int				execute_strlen_test(void)
{
	printf("===---STRLEN TEST---===\n");
	strlen_test("A STRING WITH 24 SYMBOLS");
	printf("+---------------------+\n");
	strlen_test("string");
	printf("+---------------------+\n");
	strlen_test("");
	printf("=======================\n");
	return (0);
}
