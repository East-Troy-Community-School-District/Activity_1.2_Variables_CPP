/*
Biography
Pawelski
3/13/2023
C++
*/

#include <iostream>
#include <string>

int main()
{
    std::string last_name = "Smith";
    int age = 45;
    double height_inches = 78.75;
    char gender = 'M';
    bool is_programmer = false;
    std::cout << "Name: " << last_name << "\n";
    std::cout << "Age: " << age << ", Height: "
        << height_inches << " inches\n";
    std::cout << "Gender: " << gender << "\n";
    std::cout << "Is programmer: " << is_programmer;
    return 0;
}