#include "Contact.hpp"

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

std::string     Contact::getFirstName() const {return (firstname);}
std::string     Contact::getLastName() const {return (lastname);}
std::string     Contact::getNickName() const {return (nickname);}
std::string     Contact::getNumber() const {return (number);}
std::string     Contact::getSecret() const {return (secret);}