#include "Contact.hpp"

Contact::Contact(){}

void    Contact::createContact()
{
    std::cout << "Enter first name : ";
    std::getline(std::cin, firstname);

    std::cout << "Enter last name : ";
    std::getline(std::cin, lastname);
  
    std::cout << "Enter nick name : ";
    std::getline(std::cin, nickname);

    std::cout << "Enter the phone number : ";
    std::getline(std::cin, number);

    std::cout << "Enter the darkest secret : ";
    std::getline(std::cin, secret);
}
