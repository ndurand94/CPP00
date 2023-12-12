/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndurand <ndurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:53:21 by ndurand           #+#    #+#             */
/*   Updated: 2023/12/11 17:53:21 by ndurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
    std::cout << "contact constructor called !" << std::endl;
    this->_index = 1 ;
    this->_first_name = "nicolas";
    return ;
}

Contact::~Contact()
{
    std::cout << "contact destructor called !" << std::endl;
    return;
}

/*void   Contact::getIndex()
{
    return;
}*/

std::string Contact::getContactInfo()
{
    return this->_first_name;

}

void Contact::setContactInfo(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5)
{
    this->_first_name = s1;
    this->_last_name = s2;
    this->_nickname = s3;
    this->_phone_number = s4;
    this->_darkest_secret = s5;
    return;
}
