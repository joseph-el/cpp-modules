/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:01:34 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/13 21:41:12 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void Contact::set(const std::string input, short flag)
{
    if (flag & FIRSTNAME)
        this->f_name = input;
    else if (flag & LASTNAME)
        this->l_name = input;
    else if (flag & NICKNAME)
        this->nickname = input;
    else if (flag & PHONE_NUMBER)
        this->phone_number = input;
    else
        this->darkest_secre = input;
}

void adding(PhoneBook &phonebook, std::string &input)
{
    f_name:
        _gnl("First Name : ", input);
        if (Userdetails(input)) {_cout(WHITE, "[😝]", f_name);}
        phonebook.contact[phonebook.label].set(input, FIRSTNAME);
    l_name:
        _gnl("Last Name : ", input);
        if (Userdetails(input)) {_cout(WHITE, "[😝]", l_name);}
        phonebook.contact[phonebook.label].set(input, LASTNAME);
    nickname :
        _gnl("nickname : ", input);
        if (Userdetails(input)) {_cout(WHITE, "[😝]", nickname);}
        phonebook.contact[phonebook.label].set(input, NICKNAME);
    phone_number :
        _gnl("phone_number : ", input);
        if (Userdetails(input)) {_cout(WHITE, "[😝]", phone_number);}
        phonebook.contact[phonebook.label].set(input, PHONE_NUMBER);
    darkest_secre :
        _gnl("darkest_secre : ", input);
        if (Userdetails(input)) {_cout(WHITE, "[😝]", darkest_secre);}
        phonebook.contact[phonebook.label].set(input, DARKEST_SECRE);
}

void PhoneBook::Switch(void) {
    contact_size += (contact_size < MAX_CONTACT) ? 1 : 0;
    label = (label == MAX_CONTACT - 1) ? 0 : label + 1;
}

void search(PhoneBook phonebook, std::string &input)
{
    if (!phonebook.contact_size) {
        std::cout << "Empty Contact [😤]" <<std::endl;
        return ;
    }
    phonebook.Display(0, Display_Contacts);
    debut :
        _gnl("Which index : ", input);
        for (int i = 0; i < input.length() ; i++)
            if (!isdigit(input[i]))
                {_cout(WHITE, "[😭]", debut);}
        if (input.empty() or std::stoi(input) < 1 or std::stoi(input) > phonebook.contact_size)
            {_cout(WHITE, "[😣]", debut);}
    phonebook.Display(std::stoi(input) - 1, Display_Contact);
}

void PhoneBook::Display(int index, short flag)
{
    if (flag & Display_Contact) {
        std::cout << "\n-----------------[Contact info]-----------------"WHITE << std::endl;
        std::cout << "First NAME    : " << contact[index].f_name << std::endl;
        std::cout << "Last NAME     : " << contact[index].l_name << std::endl;
        std::cout << "Nickname      : " << contact[index].nickname << std::endl;
        std::cout << "Phone Number  : " << contact[index].phone_number << std::endl;
        std::cout << "Darkest Secre : " << contact[index].darkest_secre << std::endl; 
        std::cout << "------------------------------------------------\n"WHITE << std::endl;
        return ;
    }
    std::cout   << std::setfill('-') << std::setw(50) << "" << std::endl;
    std::cout   << std::setfill(' ') << std::setw(5) << "Index" << " | "
                << std::setw(10) << "First" << " | "
                << std::setw(10) << "Last" <<  " | "
                << std::setw(10) << "Nickname" << std::endl;
    std::cout   << std::setfill('-') << std::setw(50) << "" << std::endl;
    for (int i = 0; i < contact_size; i++) 
        std::cout << std::setfill(' ')  << std::setw(5) << std::right << i + 1 << " | "
                                        << std::setw(10) << std::right << contact[i].f_name.substr(0, 10) << " | "
                                        << std::setw(10) << std::right << contact[i].l_name.substr(0, 10) << " | "
                                        << std::setw(10) << std::right << contact[i].nickname.substr(0, 10) << "."
                                        << std::endl;
}