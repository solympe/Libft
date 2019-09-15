/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:37:55 by solympe           #+#    #+#             */
/*   Updated: 2019/09/06 12:37:20 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		n;

	n = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			n++;
		i++;
	}
	return (n);
}
