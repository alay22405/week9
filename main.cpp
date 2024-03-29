//1. Static polymorphism is easier than dynamic to implement and use
//2. Because I think it is the only possible to get static polymorphism using templates. 


#include<vector>
#include<string>

#include <cmath>
#include <iostream>

class Rectangle {
public:
    Rectangle(double width, double height)
        : width{ width }, height{ height } {
    }
    double area() const {
        return width * height;
    }
private:
    double width;
    double height;
};

class Square {
public:
    Square(double side)
        : side{ side } {
    }
    double area() const {
        return side * side;
    }
private:
    double side;
};

class Circle {
public:
    Circle(double radius)
        : radius{ radius } {
    }
    double area() const {
        return 3.141592654 * radius * radius;
    }

private:
    double radius;
};
template<class T>
void printArea(const T& shape) {
    std::cout << shape.area() << "\n";
}

int main() {
    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };

    Circle c1{ 10.0 };

    printArea(r1);
    printArea(s1);
    printArea(c1);

    return 0;
}