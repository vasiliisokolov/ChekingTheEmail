#include <iostream>
#include <string>

bool first_part_check(std::string email);
bool second_part_check(std::string email);
bool search_library(std::string text, std::string library);

int main()
{
    bool right = true;
    std::string email;
    std::cout << "Enter you email :\n";
    std::cin >> email;

    if (email.find("@") == -1 || email.find("@") != email.rfind("@") 
        || email[0] == '.' || email[email.length() - 1] == '.' || email.find("..") != -1)
    {
        right = false;
    } 
        
    if (first_part_check(email) && second_part_check(email) && right)
    {
        std::cout << "Valid\n";
    }
    else std::cout << "Invalid!\n";

}

bool first_part_check(std::string email)
{    
    int i = email.find("@");
    std::string firstPart = email.substr(0, email.length() - (email.length() - i));
    std::string library = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&'*+-/=?^_`{|}~.";
    
    if (email.length() > 64 || email.length() < 1)
    {
        return false;
    }
    else
    {
        return search_library(firstPart, library);
    }
}

bool second_part_check(std::string email)
{
    int i = email.find("@");
    std::string secondPart = email.substr(i + 1, email.length() - i);
    std::string library = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz.-";
    
    if (secondPart.length() < 0 || secondPart.length() > 63)
    {
        return false;
    }
    else
    {
        return search_library(secondPart, library);
    }
}

bool search_library(std::string text, std::string library)
{
    return false;
}

