#include "conGraphLib.h"

int main()
{
    init();
    Rectangle rect1(4, 2, 10, 12);
    rect1.draw();

    Square square1(13, 13, 18);
    square1.draw();

    Circle circle1(20, 20, 5);
    circle1.draw();

    print();
}
