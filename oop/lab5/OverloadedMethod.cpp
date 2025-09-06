#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    double area(double radius) { // Circle
        return M_PI * radius * radius;
    }
    double area(double length, double breadth) { // Rectangle
        return length * breadth;
    }
    double area(int base, int height) { // Triangle
        return 0.5 * base * height;
    }
};

int main() {
    Shape s;
    cout << "Circle area: " << s.area(5.0) << endl;
    cout << "Rectangle area: " << s.area(4.0, 6.0) << endl;
    cout << "Triangle area: " << s.area(4, 6) << endl;
    return 0;
}
