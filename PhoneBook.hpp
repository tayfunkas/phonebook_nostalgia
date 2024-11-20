#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
private:
    Contact contacts[8];
    int     currentIndex;
    int     totalContacts;

public:
    PhoneBook ();
    void addContact(const Contact& contact);
    void displayContacts();
    void displaySpecificContact(int index);
    int  getTotalContacts();
    std::string truncateString(const std::string& str, size_t width);
};

#endif