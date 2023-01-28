/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:37:35 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 16:38:12 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

bool		orientLine(Point const a, Point const b, Point const c)
{

	//https://www.baeldung.com/cs/check-if-point-is-in-2d-triangle
	Point const	ab((b.getX() - a.getX()), (b.getY() - a.getY()));
	Point const	ac((c.getX() - a.getX()), (c.getY() - a.getY()));
	Fixed	tem((ab.getX() * ac.getY()) - (ab.getY() * ac.getX()));
	if (tem > Fixed(0))
		return (true);
	return (false);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (orientLine(a,b,point) && orientLine(b,c,point) && orientLine(c,a,point))
	{
		std::cout<<"the piont is inside of triangle!"<<std::endl;
		return true;
	}
	std::cout<<"the piont is out side of triangle!"<<std::endl;
	return false;
}