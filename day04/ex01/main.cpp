/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:11:16 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 19:15:55 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	size_t len_of_list = 2;
	Animal	*animal_list[len_of_list];
	for (size_t i = 0; i < len_of_list; i++)
	{
		if (i < len_of_list / 2)
			animal_list[i] = new Cat();
		else
			animal_list[i] = new Dog();
	}
	
	 for (size_t i = 0; i < len_of_list; i++)
	{
	 	delete animal_list[i];
	}

	// ***********       test deep copy
	Cat cat0;
	cat0.set_cat_ideas("cat_0 idea");
	Cat cat1;
	cat1 = cat0;
	
	cat1.set_cat_ideas("cat_1 idea");
	std::cout << cat0.get_cat_idea() << std::endl;
	std::cout << cat1.get_cat_idea() << std::endl;
	
	return (0);
}

