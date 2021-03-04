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

    // относительно центра экрана:
    
    Square square2(height/2, width/2,  0 , 0, 10);
    square2.draw();

    Circle circle2(height/2, width/2,  5, 5, 10);
    circle2.draw();


    print();
}
