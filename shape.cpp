#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    double height, width;

    double area() const {
        return 0;
    }

    double perimeter() const {
        return 0;
    }
};

class Rectangle : public Shape {
public:
    float area() const override {
        return height * width;
    }

    double perimeter() const override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    double area() const override {
        return 0.5 * height * width;
    }

    double perimeter() const override {
        double side = sqrt((height * height) + (0.25 * width * width));
        return 2 * side + width;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.height = 5.0;
    rectangle.width = 3.0;
    
    Triangle triangle;
    triangle.height = 4.0;
    triangle.width = 6.0;

    cout << "Rectangle area: " << rectangle.area() << endl;
    cout << "Rectangle perimeter: " << rectangle.perimeter() << endl;

    cout << "Triangle area: " << triangle.area() << endl;
    cout << "Triangle perimeter: " << triangle.perimeter() << endl;

    return 0;
}

