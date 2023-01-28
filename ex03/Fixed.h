/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:17:57 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 11:45:15 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include "iostream"
# include "string"
# include "cmath"

class Fixed
{
	private:
		int					fixed_n;
		static const int 	frac_bits;

	public:
		Fixed();
		Fixed(const int fixed_n);
		Fixed(const float fixed_n);
		Fixed(const Fixed& obj);
		~Fixed();
		
		Fixed& operator=(Fixed const & obj);
		
		bool operator>(Fixed const& obj) const;
		bool operator>=(Fixed const& obj) const;
		bool operator<(Fixed const& obj) const;
		bool operator<=(Fixed const& obj) const;
		bool operator==(Fixed const& obj) const;
		bool operator!=(Fixed const& obj) const;
		
		Fixed operator+(Fixed const& obj) const;
		Fixed operator-(Fixed const& obj) const;
		Fixed operator*(Fixed const& obj) const;
		Fixed operator/(Fixed const& obj) const;
		
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed&	min(Fixed& obj1, Fixed& obj2);
		static Fixed const&	min(Fixed const& obj1, Fixed const& obj2);
		static Fixed&	max(Fixed& obj1, Fixed& obj2);
		static Fixed const&	max(Fixed const& obj1, Fixed const& obj2);
		
		
				
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;			
};

std::ostream& operator<<(std::ostream& os, Fixed const & obj);

#endif