/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:17:39 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 11:44:23 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void)
{
	{
		std::cout<<"#####first test#####"<<std::endl;
		Fixed	a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		
		std::cout<<a<<std::endl;
		std::cout<<++a<<std::endl;
		std::cout<<a<<std::endl;
		std::cout<<a++<<std::endl;
		std::cout<<a<<std::endl;
		
		std::cout<<b<<std::endl;
		
		std::cout<<Fixed::max(a,b)<<std::endl;
		
		Fixed const c(a);
		std::cout<<Fixed::max(c,b)<<std::endl;
		std::cout<<Fixed::min(c,b)<<std::endl;
		std::cout<<"#####first test end #####"<<std::endl;
	}

	{
		std::cout<<"#### second test######"<<std::endl;
		Fixed		c(5);
		Fixed	const	d(5);

		std::cout<<(c+d)<<std::endl;
		std::cout<<(c-d)<<std::endl;
		std::cout<<(c*d)<<std::endl;
		std::cout<<(c/d)<<std::endl;
		
		std::cout<<"#### second test end ######"<<std::endl;
	}
	{
		std::cout<<"#### third test######"<<std::endl;
		
		Fixed	 a(5.6f);
		Fixed	const	b(5.9f);
	
		std::cout<<(a<b)<<std::endl;
		std::cout<<(a<=b)<<std::endl;
		std::cout<<(a>b)<<std::endl;
		std::cout<<(a>=b)<<std::endl;
		std::cout<<(a==b)<<std::endl;
		std::cout<<(a!=b)<<std::endl;
		
		
		std::cout<<"#### third test end ######"<<std::endl;
	}
}