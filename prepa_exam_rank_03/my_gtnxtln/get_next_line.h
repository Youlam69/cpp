/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:54:25 by ylamraou          #+#    #+#             */
/*   Updated: 2023/04/17 10:36:28 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif


size_t	ft_strlen(const char *str);
char	*ft_calloc(size_t count, size_t size);
char	*ft_strcat(char *dst, char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char *get_next_line_e(int fd);

#endif
