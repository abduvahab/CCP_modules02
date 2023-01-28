/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:54:52 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 16:41:02 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.h"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
		
	public:
		Point();
		Point(const float a, const float b);
		Point(const Fixed& a, const Fixed& b);
		Point(Point const& obj);
		~Point();

		Point& operator=(Point const& obj);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif