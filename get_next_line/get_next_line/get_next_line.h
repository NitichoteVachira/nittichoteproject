/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sand <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:02:43 by sand              #+#    #+#             */
/*   Updated: 2023/12/23 12:20:57 by sand             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char    *ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t nmeb, size_t size);
void	ft_bzero(void *str, size_t len);
size_t	strlen(const char *line);

#endif
