#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
private:
    Contact contacts[8];
    int     currentIndex;

public:
    PhoneBook ();
    void addContact(const Contact& contact);
};

#endif