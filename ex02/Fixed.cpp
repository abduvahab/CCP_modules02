/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:20:17 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 11:41:30 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int 	Fixed::frac_bits = 8;

Fixed::Fixed():fixed_n(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int fixed_n):fixed_n(fixed_n << frac_bits)
{
	std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float fixed_n):fixed_n(roundf(fixed_n * (1 << frac_bits)))
{
	std::cout<<"Float constructor called"<<std::endl;
}

Fixed::Fixed(Fixed const& obj)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->fixed_n = obj.fixed_n;
	return (*this);
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

bool	Fixed::operator<(Fixed const & obj)const
{
	return (fixed_n < obj.getRawBits());
}

bool	Fixed::operator<=(Fixed const& obj)const
{
		return (fixed_n <= obj.getRawBits());
}

bool	Fixed::operator>(Fixed const& obj)const
{
	return (fixed_n > obj.getRawBits());
}

bool	Fixed::operator>=(Fixed const& obj)const
{
	return (fixed_n >= obj.getRawBits());	
}

bool	Fixed::operator==(Fixed const& obj)const
{
	return (fixed_n == obj.getRawBits());
}

bool	Fixed::operator!=(Fixed const& obj)const
{
	return (fixed_n != obj.getRawBits());	
}

Fixed	Fixed::operator+(Fixed const& obj)const
{
	Fixed	tem(this->toFloat() + obj.toFloat());
	return (tem);
}

Fixed	Fixed::operator-(Fixed const& obj)const
{
	Fixed	tem(this->toFloat() - obj.toFloat());
	return (tem);
}

Fixed	Fixed::operator*(Fixed const& obj)const
{
	Fixed	tem(this->toFloat() * obj.toFloat());
	return (tem);
}

Fixed	Fixed::operator/(Fixed const& obj)const
{
	Fixed	tem(this->toFloat() / obj.toFloat());
	return (tem);
}

Fixed&	Fixed::operator++()
{
	this->fixed_n = fixed_n + 1;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->fixed_n = fixed_n - 1;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed	t1(this->toFloat());
	this->fixed_n = fixed_n + 1;
	return (t1);	
}

Fixed	Fixed::operator--(int)
{
	Fixed	t1(this->toFloat());
	this->fixed_n = fixed_n - 1;
	return (t1);	
}

Fixed&	Fixed::min(Fixed& obj1, Fixed& obj2)
{
	return (obj1 < obj2) ? obj1 : obj2;
}

Fixed const&	Fixed::min(Fixed const& obj1, Fixed const& obj2)
{
//	return (obj1.getRawBits() < obj2.getRawBits()) ? obj1 : obj2;
	return (obj1 < obj2) ? obj1 : obj2;
}

Fixed&	Fixed::max(Fixed& obj1, Fixed& obj2)
{
	return(obj1 > obj2) ? obj1 : obj2;
}

Fixed const&	Fixed::max(Fixed const& obj1, Fixed const& obj2)
{
	//return (obj1.getRawBits() > obj2.getRawBits()) ? obj1 : obj2;
	return (obj1 > obj2) ? obj1 : obj2;
	
}
std::ostream& operator<<(std::ostream& os, Fixed const & obj)
{
	
	os<<obj.toFloat();
	return os;
}
