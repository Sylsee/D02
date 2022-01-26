/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:35:12 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 18:02:56 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;

	this->_value = 0;

	return ;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;

	return ;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;

	this->_value = value << this->_bits;
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;

	this->_value = roundf(value * (1 << this->_bits));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->setRawBits(rhs.getRawBits());

	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & src )
{
	o << src.toFloat();

	return o;
}

int		Fixed::getRawBits( void ) const
{
	return this->_value;
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;

	return ;
}

float	Fixed::toFloat( void ) const
{
	return (float)(this->_value / roundf(1 << this->_bits));
}

int	Fixed::toInt( void ) const
{
	return this->_value >> this->_bits;
}
