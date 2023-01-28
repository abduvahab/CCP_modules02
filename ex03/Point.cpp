/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:01:57 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 16:16:55 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point():x(0),y(0)
{
//	std::cout<<"default constructor"<<std::endl;
}

Point::Point(const float a, const float b):x(a),y(b)
{
//	std::cout<<"constructor with parameters"<<std::endl;
}

Point::Point(Point const& obj):x(obj.x), y(obj.y)
{
//	std::cout<<"copy constructor"<<std::endl;
}

Point::Point(const Fixed& a, const Fixed& b):x(a.toFloat()), y(b.toFloat())
{
		
}

Point::~Point()
{
//	std::cout<<"copy constructor"<<std::endl;
	
}

Point& Point::operator=(Point const& obj)
{
	(void)obj;
	return (*this);
}


Fixed	Point::getX(void) const
{
	return (x);
}

Fixed	Point::getY(void) const
{
	return (y);
}


