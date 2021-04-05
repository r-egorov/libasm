/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:54:50 by cisis             #+#    #+#             */
/*   Updated: 2021/04/05 15:55:43 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *src);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_write(int fd, char *buf, int nbyte);
int		ft_read(int fd, char *buf, int nbyte);

#endif
