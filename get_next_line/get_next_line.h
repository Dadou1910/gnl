/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:25 by abremont          #+#    #+#             */
/*   Updated: 2024/01/10 14:21:49 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# define BUFFER_SIZE 1024

int		ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(char *str, char c);
char	*ft_strdup(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_substr(const char *str, unsigned int i, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*get_next_line(int fd);
#endif
