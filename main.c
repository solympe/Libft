/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:55:10 by solympe           #+#    #+#             */
/*   Updated: 2019/09/11 16:05:23 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main()
{
	size_t	size = 514;
	char	*ret = "wwwwwwwwwwwwwwwwwwwwwwwwww";

	printf("%s\n", ret);
	ret = ft_strnew(size);

	printf("%s\n", ret);
	printf("%s\n", "ALL RIGHT");
}