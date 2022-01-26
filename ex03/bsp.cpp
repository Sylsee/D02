/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:51:07 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 23:24:53 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	if (point == a || point == b || point == c)
		return false;

	float	a_, b_, c_;
	a_ = Point::sign(point, a, b);
	b_ = Point::sign(point, b, c);
	c_ = Point::sign(point, c, a);

	if (a_ == 0 || b_ == 0 || c_ == 0)
		return false;

	bool	va, vb, vc;
	va = a_ < 0.0f;
	vb = b_ < 0.0f;
	vc = c_ < 0.0f;

	return (va == vb && vb == vc);
}
