#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    Contact newContact;

    newContact.createContact();
    phoneBook.addContact(newContact);
    return (0);
}