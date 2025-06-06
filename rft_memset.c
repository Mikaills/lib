/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:54:47 by bahkaya           #+#    #+#             */
/*   Updated: 2025/05/31 20:36:04 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
int	main(void)
{
	/*int str[] = {1, 255, 255, 255};
	memset(str, 255, 1);
	memset(str, 1, 1);
	printf("%d\n%d\n", str[0], str[1]);*/

	char ptr[] = "deneme";
	ft_memset(ptr , 'a', 50);
	printf("%s\n", ptr);
}