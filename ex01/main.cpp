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

    static int  i = 0;

    std::cout << "Enter a command :";
    std::getline(std::cin, commandreceived);

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
            std::getline(std::cin, firstname);
            std::cout << "Enter last name : ";
            std::getline(std::cin, lastname);
            std::cout <<  "Enter nickname : ";
            std::getline(std::cin, nickname);
            std::cout << "Enter phone number : ";
            std::getline(std::cin, phonenb);
            std::cout << "Enter darkest secret : ";
            std::getline(std::cin, dksecret);
            if (firstname == "" || lastname == "" || nickname == "" || phonenb == "" || dksecret == "")
            {
                std::cout << "New contact info cannot be void !" << std::endl;
                command_choice(pb);
            }
            else 
            {
                pb->T[i].setContactInfo(firstname, lastname, nickname, phonenb, dksecret);
                i++;
                if (i == 8)
                    i = 1;
                std::cout << "New contact added !" << std::endl;
                command_choice(pb);
            }
        }
        else if (commandreceived == "SEARCH")
        {
            std::string str;
            int         index;

            std::cout << "quel contact tu veux ?" << std::endl;
            std::getline(std::cin, str);
            const char * c = str.c_str();
            index = atoi(c);
            if (index >= 0 && index <= 7)
            {
                std::cout << "Contact index " << index << " affiché :" << std::endl;
                pb->T[index].printContactInfo();         
                command_choice(pb);
            }
            else
            {
                    std::cout << "Please enter valid index !" << std::endl;
                    command_choice(pb);
            }
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
