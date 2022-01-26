/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:04:46 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/26 23:22:50 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int main(void)
{
	{
		Point a(0, 0), b(10, 0), c(0, 10), point(10, 10);
		std::cout << (bsp(a, b, c, point) == true ? "Point is in" : "Point isn't in") << std::endl;
	}
	{
		Point a(0, 0), b(10, 0), c(0, 10), point(10, 0);
		std::cout << (bsp(a, b, c, point) == true ? "Point is in" : "Point isn't in") << std::endl;
	}
	{
		Point a(0, 0), b(10, 0), c(0, 10), point(0, 2);
		std::cout << (bsp(a, b, c, point) == true ? "Point is in" : "Point isn't in") << std::endl;
	}
	{
		Point a(0, 0), b(10, 0), c(0, 10), point(3, 0);
		std::cout << (bsp(a, b, c, point) == true ? "Point is in" : "Point isn't in") << std::endl;
	}
	{
		Point a(0, 0), b(10, 0), c(0, 10), point(3, 3);
		std::cout << (bsp(a, b, c, point) == true ? "Point is in" : "Point isn't in") << std::endl;
	}
	{
		Point a(0, 0), b(10, 0), c(0, 10), point(4, 4);
		std::cout << (bsp(a, b, c, point) == true ? "Point is in" : "Point isn't in") << std::endl;
	}
	return 0;
}
