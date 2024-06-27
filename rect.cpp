#include <iostream>
#include <cmath>
class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double area() const = 0;     
    virtual double perimeter() const = 0; 
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double area() const override {
        return height * width;
    }

    double perimeter() const override {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double area() const override {
        return 0.5 * height * width;
    }
    double perimeter() const override {
        double side = std::sqrt((width / 2) * (width / 2) + height * height);
        return 2 * side + width;
    }
};

int main() {
    Rectangle rect(10, 5);
    Triangle tri(10, 5);

    std::cout << "Rectangle area: " << rect.area() << std::endl;
    std::cout << "Rectangle perimeter: " << rect.perimeter() << std::endl;

    std::cout << "Triangle area: " << tri.area() << std::endl;
    std::cout << "Triangle perimeter: " << tri.perimeter() << std::endl;

    return 0;
}
