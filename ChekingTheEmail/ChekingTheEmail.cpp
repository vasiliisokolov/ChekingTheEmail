#include <iostream>
#include <string>

bool first_part_check(std::string email);

bool second_part_check(std::string email);

int main()
{
    bool right = true;
    int check;
    std::string email;

    do
    {
        std::cout << "Enter you email :\n";
        std::cin >> email;
        check = email.find("@");
    } while (check == -1);
        
    if (first_part_check(email) && second_part_check(email))
    {
        std::cout << "Good email!\n";
    }
    else std::cout << "Schlecht email!\n";

}

bool first_part_check(std::string email)
{
    
    int i = email.find("@");
    std::string firstPart = email.substr(0, email.length() - (email.length() - i));
    std::string library = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&'*+-/=?^_`{|}~";
    if (email.length() > 64 || email.length() < 1)
    {
        return false;
    }
    else
    {
       
    }
    return false;
}

bool second_part_check(std::string email)
{
    int i = email.find("@");
    std::string secondPart = email.substr(i + 1, email.length() - i);
    return false;
}

