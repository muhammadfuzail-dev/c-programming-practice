#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    Rectangle rec;

    inputRectangle(rec);

    cout << "Area of rectangle: " << calcArea(rec) << endl;

    return 0;
}