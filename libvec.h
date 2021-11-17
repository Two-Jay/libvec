/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvec.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:29:05 by jekim             #+#    #+#             */
/*   Updated: 2021/11/17 20:26:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVEC_H
# define LIBVEC_H

#include <stdlib.h>
#include <math.h>
#include <stdint.h>

typedef struct s_vector
{
	double *param;
	int dimention;
}   t_vector;

t_vector	*vec_create(double *param, int dimention);
t_vector	*vec_add(t_vector *vec1, t_vector *vec2);
t_vector	*vec_minus(t_vector *vec1, t_vector *vec2);
t_vector	*vec_scala_multiple(t_vector *vec, double x);
int64_t		vec_dot_product(t_vector *vec1, t_vector *vec2, int8_t *errflag);
int8_t		vec_is_orthogonal(t_vector *vec1, t_vector *vec2);

#endif