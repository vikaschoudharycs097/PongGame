#ifndef PADDLE_H
#define PADDLE_H

#include "point.h"

class Paddle
{
private:
    Point _top_left;
    Point _bottom_right;
    int _moves;
public:
    Paddle(Point top_l, Point bottom_r, int moves);

    // Getters
    int getWidth(void);
    int getHeight(void);
    int getMoves(void);

    // Setters
    void setMoves(int moves);

    // Update
    void updatePosition(void);
};

#endif