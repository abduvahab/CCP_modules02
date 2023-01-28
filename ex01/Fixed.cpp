/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:29:31 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 17:15:54 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::frac_bits = 8;

Fixed::Fixed()
{
	this->fixed_n = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int fixed_n):fixed_n(fixed_n << frac_bits)
{
	std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float fixed_n):fixed_n(roundf(fixed_n * ( 1 << frac_bits)))
{
	std::cout<<"Float constructor called"<<std::endl;
//	this->fixed_n = roundf(fixed_n * ( 1 << this->frac_bits));
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout<<"Copy constructor called"<<std::endl;
//	this->fixed_n = obj.getRawBits();
//	this->fixed_n = obj.fixed_n;
	*this = obj;
}

Fixed::~Fixed()
{
	
	std::cout<<"Destructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->fixed_n = obj.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
//	std::cout<<"getRawbits member function called"<<std::endl;
	return (this->fixed_n);
}

void	Fixed::setRawBits(int const fixed_n)
{	
	this->fixed_n = fixed_n;
//	std::cout<<"setRawbits member function called"<<std::endl;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_n) / (1 << frac_bits));
}

int		Fixed::toInt(void) const
{
	return (this->fixed_n / (1 << this->frac_bits));
}

std::ostream& operator<<(std::ostream& io, Fixed const& obj)
{
	io<<obj.toFloat();
	return io;
}