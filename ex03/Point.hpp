/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:51:17 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 23:03:10 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {

public:

	Point( void );
	Point( Point const & src );
	Point( Fixed const x, Fixed const y);
	Point( float const x, float const y );
	~Point( void );

	Point &	operator=( Point const & rhs );
	bool	operator==( Point const & rhs ) const;

	static float	sign( Point const a, Point const b, Point const c );

private:

	Fixed const	_x;
	Fixed const	_y;

};


#endif /* POINT_H */
