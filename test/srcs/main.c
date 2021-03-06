/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:58:17 by cisis             #+#    #+#             */
/*   Updated: 2021/04/06 12:08:48 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasmtest.h"

int		main(int argc, char **argv)
{
	execute_strlen_test();
	execute_strcpy_test();
	execute_strcmp_test();
	execute_write_test();
	execute_strdup_test();
	execute_read_test(argc, argv);
	execute_list_test();
	return (0);
}
