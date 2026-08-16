#pragma once

struct Rectangle {
    int width;
    int height;
};

float calcArea(Rectangle r);
void inputRectangle(Rectangle& rec);