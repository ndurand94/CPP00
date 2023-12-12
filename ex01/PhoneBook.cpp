/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndurand <ndurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:53:19 by ndurand           #+#    #+#             */
/*   Updated: 2023/12/11 17:53:19 by ndurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    std::cout << "phonebook constructor called !" << std::endl;
    return;
}

PhoneBook::~PhoneBook()
{
    std::cout << "phonebook destructor called !" << std::endl;
    return;
}