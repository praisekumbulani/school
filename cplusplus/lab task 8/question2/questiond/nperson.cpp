// person.cpp (Implementation file)

#include "nperson.h" // Include the header file where the class is declared

// Default constructor
person::person() : nWeight(0.0), mFirstName(""), mAge(0) {}

// Constructor with parameters
person::person(const std::string& firstName, float newWeight)
    : nWeight(newWeight), mFirstName(firstName), mAge(0) {}

// Overload the + operator
float person::operator+(const person& otherperson) const {
    return this->nWeight + otherperson.nWeight;
}

// Overload the relational operators
bool person::operator==(const person& otherperson) const {
    return this->mFirstName == otherperson.mFirstName;
}

bool person::operator!=(const person& otherperson) const {
    return this->mFirstName != otherperson.mFirstName;
}
