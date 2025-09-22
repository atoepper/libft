/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:45:31 by alexander         #+#    #+#             */
/*   Updated: 2025/09/22 11:53:19 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

/*
** Counts the number of words in the string 's' 
** separated by the delimiter 'c'.
**
** @param s: Input string
** @param c: Delimiter character
** @return Number of words in the string
*/

static int	ft_count_words(char *s, char c)
{
	int	count;
	int	word;

	if (*s == '\0')
		return (0);
	count = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s == c && word == 1)
			word = 0;
		if (*s != c && word == 0)
		{
			word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

/*
** Returns the length of the next word in 's' 
** up to the delimiter 'c' or end of string.
**
** @param s: Input string
** @param c: Delimiter character
** @return Length of the next word
*/

static int	ft_nextlen(char *s, char c)
{
	char	*pt;
	int		count;

	pt = s;
	count = 0;
	while (*pt != c && *pt != '\0')
	{
		count++;
		pt++;
	}
	return (count);
}

/*
** Allocates and fills an array of strings by splitting 's' using delimiter 'c'.
**
** @param s: Input string
** @param arr: Pre-allocated array of strings
** @param c: Delimiter character
** @param elem: Number of words to split
** @return Pointer to the array, or NULL on allocation failure
*/

static char	**ft_clone(char *s, char **arr, char c, int elem)
{
	int	i;
	int	len;

	i = 0;
	while (i < elem)
	{
		len = ft_nextlen(s, c);
		while (len == 0)
		{
			s++;
			len = ft_nextlen(s, c);
		}
		arr[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (arr[i] == NULL)
			return (NULL);
		ft_strlcpy(arr[i], s, len + 1);
		s += len;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

/*
** Frees a partially allocated array of strings.
**
** @param arr: Array of strings to free
** @param len: Number of allocated elements in the array
** @return None
*/

static void	ft_free_arr(char **arr, int len)
{
	while (len > 0)
	{
		free(arr[len - 1]);
		len--;
	}
	free(arr);
}

/*
** Splits the string 's' into an array of strings using the delimiter 'c'.
** Each word is allocated separately. The array is terminated by a NULL pointer.
**
** @param s: Input string to split
** @param c: Delimiter character
** @return Pointer to the newly allocated array of strings, 
** or NULL on allocation failure
*/

char	**ft_split(char const *s, char c)
{
	char	*pt;
	char	**arr;
	int		elements;

	pt = (char *)s;
	elements = ft_count_words(pt, c);
	arr = (char **)malloc(sizeof(char *) * (elements + 1));
	if (arr == NULL)
		return (NULL);
	if (ft_clone(pt, arr, c, elements) == NULL)
	{
		ft_free_arr(arr, elements + 1);
		return (NULL);
	}
	return (arr);
}
