#include "triangle.h"

triangle::triangle() {
    b = 0;
    h = 0;
}
triangle::triangle(float length, float width) {
    b = length;
    h = width;
}
triangle::triangle(triangle& E) {
    b = E.b;
    h = E.h;
}
void triangle::setValues(float length, float width) {
    b = length;
    h = width;
}
float triangle::getBase() {
    return b;
}
float triangle::getHeight() {
    return h;
}
float triangle::getPerimeter() {
    return b*3;
}
float triangle::getArea() {
    return (b * h)/2;
}
