/*  This program simulates a bouncing ball
    Made to be used under windows 10
---------------------------------------------------------*/
#include <stdio.h>
#include "console.h"

#define DELAY       100000000L
#define CLS         cls()
#define LOCATE(z,s) setCursor(z,s)


int main()
{
    int x = 2, y = 3, dx = 1, speed = 0;
    long pause;

    CLS;
    LOCATE(1, 25);
    printf("**** BOUNCING BALL ****");
    LOCATE(25, 1);
    printf("----------------------------------------"
            "----------------------------------------");
    fflush(stdout);

    while(1)
    {
        LOCATE(y, x);
        printf("o");

        for(pause = 0; pause < DELAY; ++pause)
            ;
        
        if(x == 1 || x == 79)
            dx = -dx;
        
        if(y == 24)
        {
            speed = -speed;
            if(speed == 0)
                speed = -7;
        }

        ++speed;
        LOCATE(y, x);
        printf(" ");
        y += speed;
        x += dx;
    }
}