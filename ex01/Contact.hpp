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

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact {

    public:
        Contact();
        ~Contact();

        std::string getContactfirstname();
        std::string getContactlastname();
        std::string getContactnickname();
        std::string getContactphonenumber();
        std::string getContactdarkestsecret();
        std::string getContactInfo();
        void        setContactInfo(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5);
        void        printContactInfo();

    private:
        int         _index;
        std::string	_first_name;
        std::string	_last_name;
        std::string	_nickname;
        std::string	_phone_number;
        std::string	_darkest_secret; 

};

#endif