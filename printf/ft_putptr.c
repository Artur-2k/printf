/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:27:15 by artuda-s          #+#    #+#             */
/*   Updated: 2024/05/03 16:08:16 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long ptr, t_data *data)
{
	if (ptr == 0)
	{
		data->n_chars += write(1, "(nil)", 5);
		return ;
	}
	else
	{
		data->n_chars += write(1, "0x", 2);
		ft_putnum_base((long long)(ptr), data);
	}
}
