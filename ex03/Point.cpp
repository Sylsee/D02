/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:51:17 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 23:25:22 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	return ;
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y)
{
	return ;
}

Point::Point( Fixed const x, Fixed const y ) : _x(x), _y(y)
{
	return ;
}

Point::Point( float const x, float const y ) : _x(x), _y(y)
{
	return ;
}

Point::~Point( void )
{
	return ;
}

Point &	Point::operator=( Point const & rhs )
{
	(void)rhs;
	return *this;
}

bool	Point::operator==( Point const & rhs ) const
{
	return this->_x == rhs._x && this->_y == rhs._y;
}

float	Point::sign( Point const a, Point const b, Point const c )
{
	return (a._x.toFloat() - c._x.toFloat()) * (b._y.toFloat() - c._y.toFloat())
		- (b._x.toFloat() - c._x.toFloat()) * (a._y.toFloat() - c._y.toFloat());
}
