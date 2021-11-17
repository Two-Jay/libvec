/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dot_product.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:48:43 by jekim             #+#    #+#             */
/*   Updated: 2021/11/17 20:24:14 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libvec.h"

int64_t		vec_dot_product(t_vector *vec1, t_vector *vec2, int8_t *errflag)
{
	int64_t ret;
	int8_t  ix;
	
	ix = -1;
	ret = 0;
	if (vec1->dimention != vec2->dimention)
	{
		*errflag++;
		return (0);
	}
	while (++ix < vec1->dimention)
		ret += vec1->param[ix] * vec2->param[ix];
	return (ret);
}