/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_scala_multiple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:45:10 by jekim             #+#    #+#             */
/*   Updated: 2021/11/17 14:46:15 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libvec.h"

t_vector *vec_scala_multiple(t_vector *vec, double x)
{
    int ix;

    ix = 0;
    while (ix < vec->dimention)
    {
        vec->param[ix] *= x;
        ix++;
    }
    return (vec);
}