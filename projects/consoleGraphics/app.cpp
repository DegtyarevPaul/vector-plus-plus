#include "conGraphLib.h"
#include <unistd.h>
using namespace std;

int main()
{
    init();
    Rectangle rect1(2, 4, 10, 8);
    rect1.draw();

    Square square1(12, 12, 18);
    square1.draw();

    Circle circle1(20, 20, 5);
    circle1.draw();

    // относительно центра экрана:

    Square square2(height/2, width/2,  0 , 0, 6);
    square2.draw();

    Circle circle2(height/2, width/2,  -5, 0, 10);
    circle2.draw();
    print();

    // wait before animation
    sleep(3);

    // crate data for the line - path of moving circle
    int x0=10,y0=10, x1=30,y1=30, x , y;
    float t=0.f, dt = 0.05f;

    int dx=1,dy=1;
    Circle ball1(10, width/2, 0, 0, 6);

    // animation
    for(;;)
    {
        cout<<"\033c"; // fast way to clear screen
        init();
        // moving circle 1
        x = x0*t + x1*(1.f-t);
        y = y0*t + y1*(1.f-t);
        t+=dt;
        if(t>=1.f|| t<=0.f) dt*=-1;
        Circle ball2(x, y, 0,0, 4);
        ball2.draw();

        //moving  circle 2
        ball1.move(dx,dy);
        if(ball1.getOriginX()+6>=height-2||ball1.getOriginX()-6<2)
        {
            dx*=-1;
        }
        if(ball1.getOriginY()+6>=width-2||ball1.getOriginY()-6<2)
        {
            dy*=-1;
        }

        ball1.draw();

        print();
        usleep(1000*333); // ~30 frames per second

    }
}
