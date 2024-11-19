#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cctype>

std::string trim(const std::string& str) {
    size_t start = 0;
    while (start < str.length() && std::isspace(str[start]))
        ++start;
    size_t end = str.length();
    while (end > start && std::isspace(str[end - 1]))
        --end;
    return (str.substr(start, end - start));
}

int main() {
    PhoneBook phoneBook;
    std::string command;
    std::string Strindex;
    int index;

    std::cout << "Welcome to the PhoneBook application!" << std::endl;
    std::cout << "Please enter a command - ADD, SEARCH, or EXIT" << std::endl;

    while (1)
    {
        std::getline(std::cin, command);
        command = trim(command);

        if (command == "ADD")
        {
            Contact newContact;
            newContact.createContact();
            phoneBook.addContact(newContact);
        }
        else if (command == "SEARCH")
        {
            if (phoneBook.getTotalContacts() == 0)
                std::cout << "No contact to show" << std::endl;    
            else
            {
                phoneBook.displayContacts();
                std::cout << "Please provide the index of the contact to see full details" << std::endl;
                std::getline(std::cin, Strindex);
                Strindex = trim(Strindex);
                bool isValidNumber = !Strindex.empty() && Strindex.length() == 1 && std::isdigit(Strindex[0]);
                if (!isValidNumber)
                {
                    std::cout << "Invalid Index"  << std::endl;
                }
                else
                {
                    index = std::stoi(Strindex);
                    if (index < 1 || index > phoneBook.getTotalContacts())
                    {   
                        std::cout << "Invalid Index" << std::endl;
                    }
                    else
                    {
                        phoneBook.displaySpecificContact(index);
                    }
                }
            }
        }
        else if (command == "EXIT")
        {
            break ;
        }
        std::cout << "Please enter a command - ADD, SEARCH, or EXIT" << std::endl;
    }
    return (0);
}