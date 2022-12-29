/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __tmp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhoudr <yakhoudr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:22:36 by machlouj          #+#    #+#             */
/*   Updated: 2022/10/09 21:53:09 by yakhoudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	norm_tmp(char **tmp)
{
	int	i;

	i = 0;
	while (tmp && tmp[i])
	{
		ft_collect_tmp_mem(tmp[i]);
		i += 1;
	}
}