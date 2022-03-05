/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:35:12 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 20:33:47 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void )
{
	this->_value = 0;
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
}

Fixed::Fixed( const int value )
{
	this->_value = value << this->_bits;
}

Fixed::Fixed( const float value )
{
	this->_value = roundf(value * (1 << this->_bits));
}

Fixed::~Fixed( void )
{
	return ;
}

int		Fixed::getRawBits( void ) const
{
	return this->_value;
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return (float)(this->_value / roundf(1 << this->_bits));
}

int	Fixed::toInt( void ) const
{
	return this->_value >> this->_bits;
}

Fixed &	Fixed::min( Fixed & a, Fixed & b )
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed const &	Fixed::min( Fixed const & a, Fixed const & b )
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed &	Fixed::max( Fixed & a, Fixed & b )
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

Fixed const &	Fixed::max( Fixed const & a, Fixed const & b )
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->setRawBits(rhs.getRawBits());

	return *this;
}

bool	Fixed::operator>( Fixed const & rhs ) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<( Fixed const & rhs ) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=( Fixed const & rhs ) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=( Fixed const & rhs ) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==( Fixed const & rhs ) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=( Fixed const & rhs ) const
{
	return this->getRawBits() != rhs.getRawBits();
}

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() + rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() - rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed	tmp;

	tmp.setRawBits((long)this->getRawBits() * (long)rhs.getRawBits() / (1 << this->_bits));
	return tmp;
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed	tmp;

	tmp.setRawBits((long)this->getRawBits() * (1 << this->_bits) / (long)rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator++( void )
{
	Fixed	old;

	old._value = ++_value;

	return old;
}

Fixed	Fixed::operator++( int )
{
	Fixed	old;

	old._value = _value++;

	return old;
}

Fixed	Fixed::operator--( void )
{
	Fixed	old;

	old._value = --_value;

	return old;
}

Fixed	Fixed::operator--( int )
{
	Fixed	old;

	old._value = _value--;

	return old;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & src )
{
	o << src.toFloat();

	return o;
}
