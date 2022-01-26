/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:35:12 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 20:29:57 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed( Fixed const & src );
	Fixed( const int n );
	Fixed( const float n );
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs );

	bool	operator>( Fixed const & rhs ) const;
	bool	operator<( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhs ) const;

	Fixed	operator++( void );
	Fixed	operator++( int );
	Fixed	operator--( void );
	Fixed	operator--( int );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed &			min( Fixed & a, Fixed & b );
	static const Fixed &	min( Fixed const & a, Fixed const & b );
	static Fixed &			max( Fixed & a, Fixed & b );
	static const Fixed &	max( Fixed const & a, Fixed const & b );

private:

	int					_value;
	static const int	_bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & src);

#endif /* FIXED_H */
