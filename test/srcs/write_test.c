/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:00:51 by cisis             #+#    #+#             */
/*   Updated: 2021/04/05 16:01:14 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasmtest.h"

static int		write_test(int fd, char *buf, int nbyte)
{
	int		res;

	printf("filde =\t%d\nbuf =\t\"%s\"\nnbyte =\t\t%d\n",
			fd, buf, nbyte);
	if ((res = ft_write(fd, buf, nbyte)) < 0)
		perror("Error:");
	printf("res =\t%d\n", res);
	return (0);
}

int				execute_write_test(void)
{
	printf("===---WRITE TEST---===\n");
	write_test(1, "THIS IS WRITTEN BY FT_WRITE\n", 28);
	printf(DELIMITER);
	write_test(2, "This is going to stderr\n", 24);
	printf(DELIMITER);
	write_test(-1, "BLA BLA ERROR", 23);
	printf(DELIMITER);
	write_test(1, "BLA BLA ERROR", -45);
	printf("=======================\n");
	return (0);
}
