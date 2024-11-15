#include <iostream>
#include <string>

class Contact{
private:
    std::string     firstname;
    std::string     lastname;
    std::string     nickname;
    std::string     number;
    std::string     secret;

public:
    Contact(std::string fn, std::string ln, std::string nn, std::string nmb, std::string s){
        firstname = fn;
        lastname = ln;
        nickname = nn;
        number = nmb;
        secret = s;
    }

    
};
