#include <iostream>
using namespace std;

// Function to calculate the area of a square
double calculateSquareArea(double sideLength) {
    return sideLength * sideLength;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    while (true) {
        cout << "\nPlease select the area shape to calculate:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "The area of the square is " << calculateSquareArea(side) << " square units." << endl;
                break;
            case 2:
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "The area of the rectangle is " << calculateRectangleArea(length, width) << " square units." << endl;
                break;
            case 3:
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "The area of the triangle is " << calculateTriangleArea(base, height) << " square units." << endl;
                break;
            case 4:
                cout << "Exiting the program!" << endl;
                return 0;
            default:
                cout << "Invalid input. Please enter a valid input" << endl;
        }
    }
}
