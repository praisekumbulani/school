// person.h (Header file)

#pragma once // Include guard to prevent multiple inclusion

#include <string>

class person {
public:
    // Constructors
    person(); // Default constructor
    person(const std::string& firstName, float newWeight); // Constructor with parameters

    // Overload the + operator
    float operator+(const person& otherperson) const;

    // Overload the relational operators
    bool operator==(const person& otherperson) const;
    bool operator!=(const person& otherperson) const;

    // Other member functions (setters, getters, etc.) as needed

private:
    float nWeight;
    std::string mFirstName;
    int mAge;
};
