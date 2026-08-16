#include <iostream>
#include "functions.h"

using namespace std;

float calcArea(Rectangle r) {
    return r.width * r.height;
}

void inputRectangle(Rectangle& rec) {
    cout << "Enter the width of the rectangle: ";
    cin >> rec.width;

    cout << "Enter the height of the rectangle: ";
    cin >> rec.height;
}