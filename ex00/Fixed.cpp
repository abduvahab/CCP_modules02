/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:20:30 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 16:42:56 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int	Fixed::frac_bit = 8;

Fixed::Fixed()
{
	this->fixed_n = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed (const Fixed &obj)
{
	std::cout<<"Copy constructor called"<<std::endl;
	//this->fixed_n = obj.getRawBits();
	*this = obj;
}

Fixed::~Fixed()
{
	
	std::cout<<"Destructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->fixed_n = obj.getRawBits();
	return *this;
}

int	Fixed::getRawBits() const
{
	std::cout<<"getRawbits member function called"<<std::endl;
	return (this->fixed_n);
}

void	Fixed::setRawBits(int fixed_n)
{
	this->fixed_n = fixed_n;	
	std::cout<<"setRawbits member function called"<<std::endl;
}

	