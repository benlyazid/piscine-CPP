/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:11:16 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 17:42:33 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "animal.hpp"

int main()
{
	Animal *animal = new (Dog);
	animal->makeSound();
	delete animal;
	return 0;
}