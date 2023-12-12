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
    return ;
}

Contact::~Contact()
{
    std::cout << "contact destructor called !" << std::endl;
    return;
}

std::string Contact::getContactfirstname()
{
    return this->_first_name;
}

std::string Contact::getContactlastname()
{
    return this->_last_name;
}

std::string Contact::getContactnickname()
{
    return this->_nickname;
}

std::string Contact::getContactphonenumber()
{
    return this->_phone_number;
}

std::string Contact::getContactdarkestsecret()
{
    return this->_darkest_secret;
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

void Contact::printContactInfo()
{
    std::cout << "First name :" << this->_first_name << std::endl;
    std::cout << "Last name :" << this->_last_name << std::endl;
    std::cout << "Nickname :" << this->_nickname << std::endl;
    std::cout << "Phone number :" << this->_phone_number << std::endl;
    std::cout << "Darkest Secret :" << this->_darkest_secret << std::endl;
}
