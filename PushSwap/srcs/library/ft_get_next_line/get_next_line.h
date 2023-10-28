/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:24:40 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:30:27 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t	strlen_plus(const char *buff, int rule);
char	*get_new_buffer(char *buffer);
char	*copy(char *s1, char *s2);
char	*linex(int fd, char *buffer);
char	*get_next_line(int fd);
char	*read_line(char	*str);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*copy_next(char *dst, char *src);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
#endif
