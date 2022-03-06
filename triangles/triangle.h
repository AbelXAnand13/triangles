#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

class triangle {
public:
    triangle();
    triangle(float base, float height);
    triangle(triangle& E);
    void setValues(float base, float height);
    float getBase();
    float getHeight();
    float getPerimeter();
    float getArea();
    
private:
    float b, h;
};
