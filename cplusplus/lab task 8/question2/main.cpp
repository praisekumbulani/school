// main.cpp

#include <iostream>
#include "person.h" // Include the header file where the class is declared

int main() {
    person Jane("Jane", 60.0f);
    person John("John", 75.0f);

    float totalWeight = Jane + John; // Assuming you've overloaded the + operator
    std::cout << "Total Weight: " << totalWeight << std::endl;

    return 0;
}
