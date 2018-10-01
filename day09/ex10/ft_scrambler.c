/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:15:06 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:25:57 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	***a ^= *******c;
	*******c ^= ***a;
	***a ^= *******c;
	*******c ^= ****d;
	****d ^= *******c;
	*******c ^= ****d;
	****d ^= *b;
	*b ^= ****d;
	****d ^= *b;
	*b ^= ***a;
	***a ^= *b;
	*b ^= ***a;
}
