#include "Contact.hpp"

void    Contact::createContact()
{
    do {
        std::cout << "Enter first name : ";
        std::getline(std::cin, firstname);
        if (firstname.empty())
            std::cout << "No field can be empty. Please enter a valid first name." << std::endl;
    } while (firstname.empty());

    do {
        std::cout << "Enter last name : ";
        std::getline(std::cin, lastname);
        if (lastname.empty())
            std::cout << "No field can be empty. Please enter a valid last name." << std::endl;
    } while (lastname.empty());
   
    do {
        std::cout << "Enter nick name : ";
        std::getline(std::cin, nickname);
        if (nickname.empty())
            std::cout << "No field can be empty. Please enter a valid nick name." << std::endl;
    } while (nickname.empty());

    do {
        std::cout << "Enter the phone number : ";
        std::getline(std::cin, number);
        if (number.empty())
           std::cout << "No field can be empty. Please enter a valid phone number." << std::endl;
        else if (!std::all_of(number.begin(), number.end(), ::isdigit))
        {
            std::cout << "Phone number must contain only digits. Please try again." << std::endl;
            number.clear();
        }
    } while (number.empty() || !std::all_of(number.begin(), number.end(), ::isdigit));

    do {
        std::cout << "Enter the darkest secret : ";
        std::getline(std::cin, secret);
        if (secret.empty())
            std::cout << "No field can be empty. Please enter a secret, a dark one ;)" << std::endl;
    } while (secret.empty());
}

std::string     Contact::getFirstName() const {return (firstname);}
std::string     Contact::getLastName() const {return (lastname);}
std::string     Contact::getNickName() const {return (nickname);}
std::string     Contact::getNumber() const {return (number);}
std::string     Contact::getSecret() const {return (secret);}