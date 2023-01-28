/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:12:07 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 16:43:02 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
	private:
		int					fixed_n;
		static const int	frac_bit;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		~Fixed(void);
		Fixed& operator=(const Fixed &obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif