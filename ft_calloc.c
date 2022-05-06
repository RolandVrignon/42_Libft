/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:37:52 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/30 02:20:01 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*data;
	size_t	i;

	data = malloc((size * nmemb));
	if (!data)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		data[i] = 0;
		i++;
	}
	return ((void *)data);
}
