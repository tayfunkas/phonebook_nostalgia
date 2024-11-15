#include "Contact.hpp"
#include <iostream>

int main() {
    Contact contact1;

    contact1.createContact();
    std::cout << "Contact has been created succesfully!" << std::endl;
    return (0);
}