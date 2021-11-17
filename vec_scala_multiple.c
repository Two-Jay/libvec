/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_scala_multiple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:45:10 by jekim             #+#    #+#             */
/*   Updated: 2021/11/17 19:05:12 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libvec.h"

t_vector *vec_scala_multiple(t_vector *vec, double x)
{
	t_vector	*ret;
	int			limit;
	int			ix;

	ix = 0;
	limit = vec->dimention;
	ret = (t_vector *)malloc(sizeof(t_vector));
	if (!ret)
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
		ret->param[ix] = vec->param[ix] * x;
		ix++;
	}
	return (ret);
}