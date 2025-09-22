/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:27:57 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:44:23 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

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

size_t		ft_strlen_gnl(char *str);
size_t		ft_linelen_gnl(char *str);
char		*ft_strchr_gnl(char *s, int c);
void		copy_line_gnl(char *line, char *text_read);
char		*ft_strjoin_gnl(char *s1, char *s2);

#endif