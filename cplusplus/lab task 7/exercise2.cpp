#include <iostream>

class Rectangle {
private:
    double length; // Length of the rectangle
    double width;  // Width of the rectangle

public:
    // Default constructor (initialize length and width to zero)
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    // Accessor methods
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    // Calculate and return the area of the rectangle
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle;

    double userLength, userWidth;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> userLength;
    myRectangle.setLength(userLength);

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> userWidth;
    myRectangle.setWidth(userWidth);

    double area = myRectangle.calculateArea();
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
