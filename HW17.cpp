#include <iostream>
#include <cmath>

class AboutMe {
public:

    void showAge() {
        std::cout << "Age: " << age << std::endl;
    }

    void showWeight() {
        std::cout << "Weight: " << weight << std::endl;
    }

private:

    int age = 25;
    int weight = 70;

};

class Vector {
public:

    Vector() : x(0), y(0), z(0) {};

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {};

    void show() {

        std::cout << x << " " << y << " " << z << std::endl;
    }
protected:

    double x;
    double y;
    double z;

};

class MyVector : public Vector {
public:

    MyVector(): Vector(5,5,5) {};

    void length() {

        std::cout << sqrt((x * x) + (y * y) + (z * z));
    }
};

int main()
{
    AboutMe Andrei;

    Andrei.showAge();
    Andrei.showWeight();

    MyVector myVector;

    myVector.length();

}

