/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndurand <ndurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:49:31 by ndurand           #+#    #+#             */
/*   Updated: 2023/12/11 17:49:31 by ndurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib> 
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void    command_choice(PhoneBook *pb)
{
    std::string commandreceived;

    std::cout << "Enter a command :";
    std::cin >> commandreceived;

    if (commandreceived == "ADD" || commandreceived == "SEARCH" || commandreceived == "EXIT")
    {
        if (commandreceived == "ADD")
        {
            std::string firstname;
            std::string lastname;
            std::string nickname;
            std::string phonenb;
            std::string dksecret;

            std::cout << "Adding new contact..." << std::endl;
            std::cout << "Enter first name : ";
            std::cin >> firstname;
            std::cout << "Enter last name : ";
            std::cin >> lastname;
            std::cout << "Enter nickname : ";
            std::cin >> nickname;
            std::cout << "Enter phone number : ";
            std::cin >> phonenb;
            std::cout << "Enter darkest secret : ";
            std::cin >> dksecret;
            pb->T[1].setContactInfo(firstname, lastname, nickname, phonenb, dksecret);
            std::cout << "New contact added !" << std::endl;
            command_choice(pb);
        }
        else if (commandreceived == "SEARCH")
        {
            std::cout << "SEARCH COMMAND" << std::endl;
            command_choice(pb);
        }
        else if (commandreceived == "EXIT")
        {
            std::cout << "Thank you for using The Awesome Phonebook !" << std::endl;
        }
    }
    else
    {
        std::cout << "Command invalid !" << std::endl;
        command_choice(pb);
    }
}

int main()
{
    PhoneBook   thephonebook;


    std::cout << "X-------------------------------------------X\n"
            "|                                           |\n"
            "|       *         ndurand          *        |\n"
            "|                 Awesome                   |\n"
            "|                 Phone                     |\n"  
            "|                 Book                      |\n"
            "|                                           |\n"
            "|          ADD : Add new contact            |\n"
            "|          SEARCH : Display contact         |\n"
            "|          EXIT : Exit                      |\n"
            "|                                           |\n"
            "X-------------------------------------------X" 
            "                                             \n" << std::endl;


    command_choice(&thephonebook);
    return 0;
}
