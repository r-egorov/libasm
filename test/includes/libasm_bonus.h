/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:54:50 by cisis             #+#    #+#             */
/*   Updated: 2021/04/06 12:33:08 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_BONUS_H
# define LIBASM_BONUS_H

int					ft_strlen(char *str);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *src);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_write(int fd, char *buf, int nbyte);
int					ft_read(int fd, char *buf, int nbyte);

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

void				ft_list_push_front(t_list **begin_list, void *data);
int					ft_list_size(t_list *begin_list);

#endif
