/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rft_strdupr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:38:54 by bahkaya           #+#    #+#             */
/*   Updated: 2025/05/29 20:30:20 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
char *ft_strdup(const char *s)
{
	const char *ptr;
	
	ptr = malloc(sizeof(char) * 1);
}
int main()
{
	
	 char *c = "d";
	
	printf("%s", ft_strdup(c));
	free(c);
}