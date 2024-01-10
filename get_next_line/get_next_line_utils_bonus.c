/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:47:22 by abremont          #+#    #+#             */
/*   Updated: 2024/01/10 14:02:35 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strdup(const char *str)
{
	int		i;
	int		size;
	char	*s;

	i = 0;
	size = ft_strlen(str);
	s = malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*news;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (ft_strdup(""));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	news = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!news)
		return (0);
	ft_memmove(news, s1, lens1 + 1);
	ft_memmove(news + lens1, s2, lens2);
	news[lens1 + lens2] = '\0';
	return (news);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (!src && !dest && n)
		return (0);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}
