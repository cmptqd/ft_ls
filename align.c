/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   align.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesbos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 17:17:50 by bdesbos           #+#    #+#             */
/*   Updated: 2016/03/23 17:25:15 by bdesbos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	p_align_int_r(int max, int siz)
{
	while (max > siz++)
		write(1, " ", 1);
}