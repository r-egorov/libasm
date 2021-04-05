/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:58:39 by cisis             #+#    #+#             */
/*   Updated: 2021/04/05 16:47:29 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasmtest.h"

static int		read_stdin_test(void)
{
	char	buf[BUFFER_SIZE];
	int		res;

	printf("%s", DELIMITER);
	printf("TESTING STDIN READ\nPlese, type something:\n");
	res = ft_read(0, buf, BUFFER_SIZE);
	buf[res] = '\0';
	printf("\nWhat we have read:\n\"%s\"\n", buf);
	printf("ft_read returned: %d\n", res);
	printf("If you see the same text, test is passed\n");
	printf("%s", DELIMITER);
	return (0);
}

static int		read_file_test(char *filename, int nbyte)
{
	char	buf[BUFFER_SIZE];
	int		res;
	int		fd;

	fd = open(filename, O_RDONLY);
	printf("%s", DELIMITER);
	printf("READING FROM THE FILE: %s\n", filename);
	printf("fdes =\t%d\nnbyte =\t%d\n", fd, nbyte);
	res = ft_read(fd, buf, nbyte);
	printf("  -->RETURN = %d\n", res);
	buf[res] = '\0';
	printf("READ:\n\"%s\"\n", buf);
	printf("nbytes:\n%d\n", res);
	printf("%s", DELIMITER);
	return (0);
}

int				execute_read_test(int argc, char **argv)
{
	printf("===---READ TEST---===\n");
	read_stdin_test();
	if (argc == 3)
		read_file_test(argv[1], atoi(argv[2]));
	printf("=======================\n");
	return (0);
}
