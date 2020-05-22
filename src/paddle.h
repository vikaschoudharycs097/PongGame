#ifndef PADDLE_H
#define PADDLE_H

#include "point.h"

enum class MoveDirection
{
    LEFT,
    RIGHT,
    TOP,
    BOTTOM
};

class Paddle
{
private:
    Point _top_left;
    Point _bottom_right;
    int _moves;
    const int MAX_WIDTH;
    const int MAX_HEIGHT;
public:
    Paddle(Point top_l, Point bottom_r, int moves, int max_width, int max_height);

    // Getters
    int getWidth(void);
    int getHeight(void);
    int getMoves(void);

    // Setters
    void setMoves(int moves);

    // Update
    void updatePosition(MoveDirection dir);
};

#endif