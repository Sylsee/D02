/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:04:46 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 20:45:47 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	{
		std::cout << "********** operator overloads ***********" << std::endl;
		Fixed a(40);
		Fixed b(10);
		std::cout << "test with -->a = 40 && b = 10" << std::endl;
		std::cout << "* a to float: " << a.toFloat() << std::endl;
		std::cout << "* b to float: " << b.toFloat() << std::endl;
		std::cout << "* addition: " << a + b << std::endl;
		std::cout << "* substraction: " << a - b << std::endl;
		std::cout << "* multipication: " << a * b << std::endl;
		std::cout << "* division: " << a / b << std::endl << std::endl;
	}
	{
		std::cout << "**********        bool       ************" << std::endl;
		Fixed a(42);
		std::cout << "test with -->a = 42 && b = 21" << std::endl;
		std::cout << "* a > b: " << (a > Fixed(21)) << std::endl;
		std::cout << "* a < b: " << (a < Fixed(21)) << std::endl;
		std::cout << "* a <= b: " << (a <= Fixed(21)) << std::endl;
		std::cout << "* a >= b: " << (a >= Fixed(21)) << std::endl;
		std::cout << "* a == b: " << (a == Fixed(21)) << std::endl;
		std::cout << "* a != b: " << (a != Fixed(21)) << std::endl << std::endl;
	}
	{
		std::cout << "**********     min & max     ************" << std::endl;
		Fixed a(10);
		Fixed b(5);
		Fixed const c(10);
		Fixed const d(5);
		std::cout << "test with -->a = 10, b = 5, (const)c = 10, (const)d = 5" << std::endl;
		std::cout << "* max(a, b): " << Fixed::max(a, b) << std::endl;
		std::cout << "* min(a, b): " << Fixed::min(a, b) << std::endl;
		std::cout << "* max(c, d): " << Fixed::max(c, d) << std::endl;
		std::cout << "* min(c, d): " << Fixed::min(c, d) << std::endl << std::endl;
	}
	{
		Fixed a;
		Fixed const b( Fixed(5.05f) * Fixed( 2 ));
		std::cout << "******** Tests from the subject  ********" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
	return 0;
}
