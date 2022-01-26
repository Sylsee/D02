/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:35:12 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 17:55:10 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed( Fixed const & src );
	Fixed( const int n );
	Fixed( const float n );
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int					_value;
	static const int	_bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & src);

#endif /* FIXED_H */
