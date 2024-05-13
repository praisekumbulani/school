// person.cpp (Implementation file)

#include "person.h" // Include the header file where the class is declared

// Default constructor
person::person() : nWeight(0.0), mFirstName(""), mAge(0) {}

// Constructor with parameters
person::person(const std::string& firstName, float newWeight)
    : nWeight(newWeight), mFirstName(firstName), mAge(0) {}

// Other member function implementations as needed
// ...

// Overload the addition operator (if required)
// ...
