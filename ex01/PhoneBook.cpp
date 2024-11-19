#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {}

int     PhoneBook::getTotalContacts() {return (totalContacts);}

void    PhoneBook::addContact(const Contact& contact) {
    contacts[currentIndex] = contact;
    currentIndex = (currentIndex + 1) % 8;
    if (totalContacts < 8)
        totalContacts++;
    std::cout << "Contact added to phonebook" << std::endl;
}

std::string PhoneBook::truncateString(const std::string& str, size_t width) {
    if (str.length() > width)
    {
        return (str.substr(0, width - 1) + ".");
    }
    return (str);
}

void    PhoneBook::displayContacts() {
    int i = 0;
    const int columnWidth = 10;

    std::cout << std::setw(columnWidth) << "Index" << " | " << std::setw(columnWidth) << "First Name" << " | "
            << std::setw(columnWidth) << "Last Name" << " | " << std::setw(columnWidth) << "Nickname" << std::endl;
    std::cout << std::string(4 * columnWidth + 10, '-') << std::endl; 

    while (i < totalContacts)
    {
        std::cout << std::setw(columnWidth) << i + 1 << " | " << std::setw(columnWidth) << truncateString(contacts[i].getFirstName(), columnWidth) 
        << " | " << std::setw(columnWidth) << truncateString(contacts[i].getLastName(), columnWidth) << " | " << std::setw(columnWidth) 
        << truncateString(contacts[i].getNickName(), columnWidth) << std::endl;
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

    