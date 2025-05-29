/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:54:47 by bahkaya           #+#    #+#             */
/*   Updated: 2025/05/29 17:23:27 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
void *ft_memset(void *s, int c, size_t n) // void *s (Array bunun içine yazdır), int c (void *s içine ne yazdırmak istediğin), size_t n (ne kadar yazdırmak istiyorsun)
{
	size_t i;
	unsigned char *temp;
	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
int main()
{
	int x = 3;
	int c = 1;
	int a = 10;
	ft_memset((void*)&x, c, a);
	printf("%d", x);
}
	
