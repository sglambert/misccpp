#include <iostream>
#include <string>


int main( )
{
    std::cout << "Enter your first name\n";
    std::string firstName;
    std::getline( std::cin, firstName );

    std::cout << "Enter your last name\n";
    std::string lastName;
    std::getline( std::cin, lastName );

    std::cout << "\nHi " << firstName << ' ' << lastName << '\n';
}