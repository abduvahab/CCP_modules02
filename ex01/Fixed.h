/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:19:45 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 11:48:11 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include  <cmath>

class Fixed
{
	private:
		int	fixed_n;
		static const int frac_bits;
	
	public:
		Fixed();
		Fixed(const int fixed_n);
		Fixed(const float fixed_n);
		Fixed(const Fixed& obj);
		~Fixed();
		Fixed& operator=(const Fixed &obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;		
};

std::ostream& operator<<(std::ostream& io, Fixed const& obj);

#endif