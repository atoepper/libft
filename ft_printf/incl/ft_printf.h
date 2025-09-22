/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:27:57 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:36:18 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef MAX_FD
#  define MAX_FD 1024
# endif
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

# include <stdint.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int			ft_printf(const char *str, ...);
int			ft_putchar_printf(char c);
int			ft_puthexlow_printf(unsigned int nbr);
int			ft_puthexup_printf(unsigned int nbr);
int			ft_putnbr_printf(int nbr);
int			ft_putptr_printf(void *arg);
int			ft_putstr_printf(char *str);
int			ft_putuint_printf(unsigned int nbr);

#endif