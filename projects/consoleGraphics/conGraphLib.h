#pragma once

#include <iostream>
const int height=50, width=40; 
static char black='*', white=' ';
static char screen[height][width];

void init();
void print();

void drawPoint(int x, int y);
void drawLine(int x1, int y1, int x2, int y2);
void drawCircle(int x0, int y0, int R);

class Shape
{
    private:
        int x, y;
    public:
        Shape():x(0),y(0){}
        Shape(int x, int y):x(x),y(y){}
        int getOriginX();
        int getOriginY();
        void move(int dx, int dy);
        void moveTo(int new_x, int new_y);
};

class Rectangle: public Shape
{
    private:
        int x0,y0, x1, y1;
    public:
        Rectangle(int x0, int y0, int x1, int y1):
            Shape(0,0), x0(x0), y0(y0), x1(x1), y1(y1){}
        Rectangle(int x, int y, int x0, int y0, int x1, int y1):
            Shape(x,y), x0(x0), y0(y0), x1(x1), y1(y1){}

        void draw();
};

class Square: public Rectangle
{
    private:
        int x0, y0, size;
    public:
        Square(int x0, int y0, int size):
            Rectangle(x0, y0, x0+size, y0+size){}
        Square(int x, int y, int x0, int y0, int size):
            Rectangle(x, y, x0, y0, x0+size, y0+size){}


};

class Circle: public Shape
{
    private:
        int x0, y0, R;
    public:
        Circle(int x0, int y0, int R):
            Shape(0, 0), x0(x0),y0(y0),R(R){}
        Circle(int x, int y, int x0, int y0, int R):
            Shape(x, y), x0(x0),y0(y0),R(R){}

        void draw();
};
