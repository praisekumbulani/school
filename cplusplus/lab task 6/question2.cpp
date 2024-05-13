#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random integer between 0 and 11
    int daysUntilExpiration = std::rand() % 12;

    // Check the subscription status based on the conditions using a switch statement
    switch (daysUntilExpiration) {
        case 1:
            std::cout << "Your subscription expires within a day! Renew now and save 20%!" << std::endl;
            break;
        case 2: case 3: case 4: case 5:
            std::cout << "Your subscription expires in " << daysUntilExpiration
                      << " days. Renew now and save 10%!" << std::endl;
            break;
        case 0: case 6: case 7: case 8: case 9: case 10:
            std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
            break;
        default:
            std::cout << "You have an active subscription." << std::endl;
            if (daysUntilExpiration < 0) {
                std::cout << "Your subscription has expired." << std::endl;
            }
    }

    return 0;
}
