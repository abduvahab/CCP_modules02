/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:36:08 by areheman          #+#    #+#             */
/*   Updated: 2022/12/20 16:30:03 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

int main(void)
{
	{
		std::cout<<"##test1 inside ##"<<std::endl;
		Point	a;
		Point	b(10, 0);
		Point	c(5, 10);
		
		Point	d(2, 2);
		bsp(a, b, c, d);
		std::cout<<"##test1 end##"<<std::endl;
	}
	
	{
		std::cout<<"##test2 outside ##"<<std::endl;
		Point	a;
		Point	b(10.5, 5);
		Point	c(8.5, 4);
		
		Point	d(0.5, 2);
		bsp(a, b, c, d);
		std::cout<<"##test2 end##"<<std::endl;
	}
	
	{
		std::cout<<"##test3 inside##"<<std::endl;
		Point	a;
		Point	b(8.5, 0);
		Point	c(4.5, 7);
		
		Point	d(4, 3);
		bsp(a, b, c, d);
		std::cout<<"##test3 end##"<<std::endl;
	}
	
	{
		std::cout<<"##test4##"<<std::endl;
		Point	a;
		Point	b(8.5, 0);
		Point	c(4.5, 7);
		
		Point	d(a);
		bsp(a, b, c, d);
		std::cout<<"##test4 end##"<<std::endl;
	}
	
}