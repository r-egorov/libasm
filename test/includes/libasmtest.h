/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasmtest.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:57:39 by cisis             #+#    #+#             */
/*   Updated: 2021/04/06 12:32:30 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_LIBASMTEST_H
# define LIBASM_LIBASMTEST_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>
# include "libasm_bonus.h"

# define DELIMITER "+----------------------+\n"
# define BUFFER_SIZE 100000

int		execute_strcmp_test(void);
int		execute_strcpy_test(void);
int		execute_strdup_test(void);
int		execute_strlen_test(void);
int		execute_write_test(void);
int		execute_read_test(int argc, char **argv);
int		execute_list_test(void);

#endif
