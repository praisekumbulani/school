#include <iostream>
#include <string>

int main() {
    // Dynamically allocate an integer
    int* userInt = new int;
    std::cout << "Enter an integer: ";
    std::cin >> *userInt;

    // Dynamically allocate a string
    std::string* userString = new std::string;
    std::cout << "Enter a string: ";
    std::cin.ignore(); // Clear newline character from previous input
    std::getline(std::cin, *userString);

    // Output the values
    std::cout << "You entered the integer: " << *userInt << std::endl;
    std::cout << "You entered the string: " << *userString << std::endl;

    // Clean up memory
    delete userInt;
    delete userString;

    return 0;
}
