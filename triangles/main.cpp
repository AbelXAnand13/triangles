//Abel Anand
#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>
#include "triangle.h"

int main() {
    triangle tri;
    float base;
    float height;
    cout << "Enter the Base\n";
    cin >> base;
    cout << "Enter the height\n";
    cin >> height;
    tri.setValues(base, height);
    cout << "Area of triangle = " << tri.getArea() << "\nPerimeter of Triangle = " << tri.getPerimeter() << endl;
}
