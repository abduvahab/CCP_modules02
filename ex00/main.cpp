/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:26:33 by areheman          #+#    #+#             */
/*   Updated: 2022/12/19 12:30:26 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b; 

	std::cout<<a.getRawBits()<<std::endl;	
	std::cout<<b.getRawBits()<<std::endl;	
	std::cout<<c.getRawBits()<<std::endl;	
	return 0;
}