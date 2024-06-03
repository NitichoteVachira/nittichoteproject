/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 07:41:03 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 12:40:00 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define HEX_LOW	"0123456789abcdef"
# define HEX_UP		"0123456789ABCDEF"

int		ft_printf(char const *input, ...);
void	ft_printout_char(char c, size_t *size);
void	ft_printout_str(char *str, size_t *size);
void	ft_printout_int(int num, size_t *size);
void	ft_printout_uint(unsigned int num, size_t *size);
void	ft_printout_hex(unsigned int num, size_t *size, char *base_num);
void	ft_printout_ptr(void *ptr, size_t *size);
void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t nmeb, size_t size);
void	*ft_memset(void *dest, int src, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_sidefunc(unsigned long long input, char *base_num);

#endif
