// ShapeCalculator.cpp

#include <iostream>
#include <cmath> // For mathematical functions (e.g., pow, sqrt)

using namespace std;

// Define classes for square, triangle, and circle
class Square {
private:
    double sideLength;

public:
    Square() {
        sideLength = 0.0;
    }

    Square(double length) {
        sideLength = length;
    }

    double getSideLength() const {
        return sideLength;
    }

    double calculateArea() const {
        return sideLength * sideLength;
    }
};

class Triangle {
private:
    double base;
    double height;

public:
    Triangle() {
        base = 0.0;
        height = 0.0;
    }

    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double getBase() const {
        return base;
    }

    double getHeight() const {
        return height;
    }

    double calculateArea() const {
        return 0.5 * base * height;
    }
};

class Circle {
private:
    double radius;

public:
    Circle() {
        radius = 0.0;
    }

    Circle(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double calculateArea() const {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    char choice;
    do {
        cout << "Choose a shape:\n";
        cout << "1. Square\n";
        cout << "2. Triangle\n";
        cout << "3. Circle\n";
        cout << "4. Quit\n";
        cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                cout << "Enter side length for the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << square.calculateArea() << "\n";
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter base length for the triangle: ";
                cin >> base;
                cout << "Enter height for the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << triangle.calculateArea() << "\n";
                break;
            }
            case '3': {
                double radius;
                cout << "Enter radius for the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << circle.calculateArea() << "\n";
                break;
            }
            case '4':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != '4');

    return 0;
}
