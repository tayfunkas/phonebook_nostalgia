#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>


class Contact {
private:
    std::string     firstname;
    std::string     lastname;
    std::string     nickname;
    std::string     number;
    std::string     secret;

public:
        //Contact();

        //Contact(std::string fn, std::string ln, std::string nn, std::string nmb, std::string s);

        void   createContact();
};

#endif