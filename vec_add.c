/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:30:50 by jekim             #+#    #+#             */
/*   Updated: 2021/11/17 19:03:28 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libvec.h"

t_vector *vec_add(t_vector *vec1, t_vector *vec2)
{
	t_vector	*ret;
	int			limit;
	int			ix;

	ix = 0;
	limit = vec1->dimention;
	ret = (t_vector *)malloc(sizeof(t_vector));
	if (vec1->dimention != vec2->dimention || !ret)
		return (NULL);
	ret->param = (double *)malloc(sizeof(double) * (limit + 1));
	if (!ret->param)
	{
		free(ret);
		return (NULL);
	}
	ret->param[limit] = '\0';
	while (ix < limit)
	{
		ret->param[ix] = vec1->param[ix] + vec2->param[ix];
		ix++;
	}
	return (ret);
}