/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:18:03 by bahkaya           #+#    #+#             */
/*   Updated: 2025/05/29 17:31:47 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
}
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strrchr("denemen", 'n'));
}
/*int main()
{
	printf("%s\n", ft_strrchr("deneme", 'n'));
	printf("%s", strrchr("deneme", 'n'));
}*/