/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_is_orthogonal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:27:08 by jekim             #+#    #+#             */
/*   Updated: 2021/11/17 20:29:16 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libvec.h"

int8_t		vec_is_orthogonal(t_vector *vec1, t_vector *vec2)
{
    int8_t  errflag;
    int64_t ret;

    ret = vec_dot_product(vec1, vec2, &errflag);
    if (ret != 0 || errflag != 0)
        return ((int8_t)0);
    return ((int8_t)1);
}