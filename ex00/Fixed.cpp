/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:35:12 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 17:31:01 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_value = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->_value;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;

	this->_value = raw;

	return ;
}
