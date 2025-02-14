#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip> 

class PhoneBook
{
    private:
            Contact _contacts[8];
            int     _index;
            int     _OldestIndex;
            static const int maxContacts = 8;
    public:
            PhoneBook();
            ~PhoneBook();
            void    add(const Contact& contact);
            void    search(int id);
            void    displayContacts()const;
            int    inputId(int id);

            Contact get_contact(int index);

};

#endif