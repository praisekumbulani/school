#include <iostream>
#include <limits> // For std::numeric_limits

int main() {
    int userValue;

    // Prompt the user for an integer value between 5 and 10
    while (true) {
        std::cout << "Please enter an integer value between 5 and 10: ";
        std::cin >> userValue;

        // Check if the input is a valid integer
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else if (userValue >= 5 && userValue <= 10) {
            break; // Exit the loop if the input is within the valid range
        } else {
            std::cout << "Input value must be between 5 and 10." << std::endl;
        }
    }

    // Inform the user that their input value has been accepted
    std::cout << "Your input value (" << userValue << ") has been accepted." << std::endl;

    return 0;
}
