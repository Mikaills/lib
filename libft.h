/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:31:05 by bahkaya           #+#    #+#             */
/*   Updated: 2025/05/29 14:27:48 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h> // Sonradan sil PRINTF(-42)
#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalnum(int str);
int	ft_isalpha(int str);
int	ft_isascii(int str);
int	ft_isdigit(int str);
int	ft_isprint(int str);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
