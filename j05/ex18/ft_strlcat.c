/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 18:39:57 by nboute            #+#    #+#             */
/*   Updated: 2016/08/15 22:25:53 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strn_cat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i < nb - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlen;
	unsigned int srclen;

	srclen = 0;
	destlen = 0;
	while (dest[destlen])
		destlen++;
	while (src[srclen])
		srclen++;
	if (size <= destlen)
		return (destlen + size + 1);
	ft_strn_cat(dest, src, size);
	return (destlen + srclen);
}
