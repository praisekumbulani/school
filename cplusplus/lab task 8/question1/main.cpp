#include <iostream>

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    // Constructor
    Box() : length(0.0), breadth(0.0), height(0.0) {}

    // Setter methods
    void setLength(double len) {
        length = len;
    }

    void setBreadth(double brd) {
        breadth = brd;
    }

    void setHeight(double hgt) {
        height = hgt;
    }

    // Calculate volume
    double GetVolume() {
        return length * breadth * height;
    }

    // Overload + operator to add two Box objects
    Box operator+(const Box& other) {
        Box result;
        result.length = this->length + other.length;
        result.breadth = this->breadth + other.breadth;
        result.height = this->height + other.height;
        return result;
    }
};

int main() {
    Box Box1; // Declare Box1 of type Box
    Box Box2; // Declare Box2 of type Box
    Box Box3; // Declare Box3 of type Box
    double volume = 0.0; // Store the volume of a box here

    // Box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // Box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // Volume of Box 1
    volume = Box1.GetVolume();
    std::cout << "Volume of Box1: " << volume << std::endl;

    // Volume of Box 2
    volume = Box2.GetVolume();
    std::cout << "Volume of Box2: " << volume << std::endl;

    // Add two objects as follows:
    Box3 = Box1 + Box2;

    // Volume of Box 3
    volume = Box3.GetVolume();
    std::cout << "Volume of Box3: " << volume << std::endl;

    return 0;
}
