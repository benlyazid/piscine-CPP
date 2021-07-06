/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:29:48 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 10:32:43 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK

#define PHONE_BOOK

#include "contact.hpp"

#define SIZE 8
class Phone_book
{
    private:

        contact my_contact[SIZE];
        int     index;

    public:

        Phone_book();
        void    add(void);
		void	print_10_chart_from_string(std::string str);
        void    serach();
};

#endif
