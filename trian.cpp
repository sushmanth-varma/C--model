#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() const {
        return 0;
    }

    virtual double perimeter() const {
        return 0;
    }

    virtual ~Shape() = default;
};

class Rectangle : public Shape {
public:
    double width, height;
    
    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
public:
    double a, b, c;

    double area() const override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() const override {
        return a + b + c;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.width = 5.0;
    rectangle.height = 3.0;
    
    Triangle triangle;
    triangle.a = 3.0;
    triangle.b = 4.0;
    triangle.c = 5.0;

    cout << "Rectangle area: " << rectangle.area() << endl;
    cout << "Rectangle perimeter: " << rectangle.perimeter() << endl;

    cout << "Triangle area: " << triangle.area() << endl;
    cout << "Triangle perimeter: " << triangle.perimeter() << endl;

    return 0;
}

