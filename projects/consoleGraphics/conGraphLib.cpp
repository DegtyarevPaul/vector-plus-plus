#include "conGraphLib.h"
using namespace std;

void init()
{
    for(int i=0;i<height;++i)
        for(int j=0;j<width;++j)
            screen[i][j]=white;
}

void print()
{
    for(int i=0;i<height;++i)
    {
        for(int j=0;j<width;++j)
        {
            cout << screen[i][j];
        }
        cout << endl;
    }
}

void drawPoint(int x, int y)
{
    screen[x][y]=black;
}

void drawLine(int x1, int y1, int x2, int y2)
{
    const int deltaX = abs(x2 - x1);
    const int deltaY = abs(y2 - y1);
    const int signX = x1 < x2 ? 1 : -1;
    const int signY = y1 < y2 ? 1 : -1;
    int error = deltaX - deltaY;
    drawPoint(x2, y2);
    while(x1 != x2 || y1 != y2) 
    {
        drawPoint(x1, y1);
        int error2 = error * 2;
        if(error2 > -deltaY) 
        {
            error -= deltaY;
            x1 += signX;
        }
        if(error2 < deltaX) 
        {
            error += deltaX;
            y1 += signY;
        }
    }    
}

void drawCircle(int x0, int y0, int R)
{

    int x = 0;
    int y = R;
    int delta = 1 - 2 * R;
    int error = 0;
    while(y >= 0) {
        drawPoint(x0 + x, y0 + y);
        drawPoint(x0 + x, y0 - y);
        drawPoint(x0 - x, y0 + y);
        drawPoint(x0 - x, y0 - y);
        error = 2 * (delta + y) - 1;
        if(delta < 0 && error <= 0) {
            ++x;
            delta += 2 * x + 1;
            continue;
        }
        error = 2 * (delta - x) - 1;
        if(delta > 0 && error > 0) {
            --y;
            delta += 1 - 2 * y;
            continue;
        }
        ++x;
        delta += 2 * (x - y);
        --y;
    }
}

int Shape::getOriginX()
{
    return x;
}

int Shape::getOriginY()
{
    return y;
}

void Rectangle::draw()
{
    // сдвигаем центр фигуры
    int t_x0 = x0-getOriginX();
    int t_x1 = x1-getOriginX();
    int t_y0 = y0-getOriginY();
    int t_y1 = y1-getOriginY();
    drawLine(t_x0,t_y0,t_x1,t_y0);
    drawLine(t_x1,t_y0,t_x1,t_y1);
    drawLine(t_x1,t_y1,t_x0,t_y1);
    drawLine(t_x0,t_y1,t_x0,t_y0);
}

void Circle::draw()
{
    int t_x0 = x0 - getOriginX();
    int t_y0 = y0 - getOriginY();

    drawCircle(t_x0, t_y0, R);
}
