#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0) {}

void    PhoneBook::addContact(const Contact& contact) {
    contacts[currentIndex] = contact;
    currentIndex = (currentIndex + 1) % 8;
    std::cout << "Contact added to phonebook" << std::endl;
}