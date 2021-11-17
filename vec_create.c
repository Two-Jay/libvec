/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:30:50 by jekim             #+#    #+#             */
/*   Updated: 2021/11/17 14:44:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libvec.h"

t_vector    *vec_create(double *param, int dimention)
{
	t_vector	*ret;
	int			ix;

	ix = 0;
	ret = (t_vector *)malloc(sizeof(t_vector));
	if (!ret)
		return (NULL);
	ret->param = (double *)malloc(sizeof(double) * (dimention + 1));
	if (!ret->param)
	{
		free(ret);
		return (NULL);
	}
	ret->param[dimention] = '\0';
	while (ix < dimention)
	{
		ret->param[ix] = param[ix];
		ix++;
	}
	ret->dimention = dimention;
	return (ret);
}