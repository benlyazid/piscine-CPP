/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:09:36 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 17:37:06 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog Copy Constuctor" << std::endl;
	
	*this = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog Operator =" << std::endl;

	if (this != &dog)
	{
		this->type = dog.type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog Sound" << std::endl;
	
}
