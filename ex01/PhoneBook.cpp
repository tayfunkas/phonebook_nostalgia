#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0) {}

int     PhoneBook::getCurrentIndex() {return (currentIndex);}

void    PhoneBook::addContact(const Contact& contact) {
    contacts[currentIndex] = contact;
    currentIndex = (currentIndex + 1) % 8;
    std::cout << "Contact added to phonebook" << std::endl;
}

void    PhoneBook::displayContacts() {
    int i = 0;
    if (currentIndex >= 8)
        currentIndex = 8;   
    while (i < currentIndex)
    {
        std::cout << i + 1 << " | " << contacts[i].getFirstName() << " | " << contacts[i].getLastName() << " | " << contacts[i].getNickName() << std::endl;
        i++;
    }
}

void    PhoneBook::displaySpecificContact(int index) {
    std::cout << contacts[index - 1].getFirstName() << std::endl;
    std::cout << contacts[index - 1].getLastName() << std::endl;
    std::cout << contacts[index - 1].getNickName() << std::endl; 
    std::cout << contacts[index - 1].getNumber() << std::endl;
    std::cout << contacts[index - 1].getSecret() << std::endl;
}

    