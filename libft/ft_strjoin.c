/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 23:15:24 by sksourou          #+#    #+#             */
/*   Updated: 2015/01/26 23:15:24 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*new;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	if (s1 && s2)
	{
		i = ft_strlen(s1) + ft_strlen(s2);
		new = ft_strnew(i);
		if (new)
		{
			new = ft_strcpy(new, s1);
			new = ft_strcat(new, s2);
			return (new);
		}
	}
	return (NULL);
}
