#include "paddle.h"

// Constructor
Paddle::Paddle(Point top_l, Point bottom_r, int moves, int max_width, int max_height): 
_top_left(top_l), _bottom_right(bottom_r), _moves(moves), MAX_WIDTH(max_width), MAX_HEIGHT(max_height)
{

}

// Getters
int Paddle::getWidth(void)
{
    return _bottom_right.getX() - _top_left.getX();
}

int Paddle::getHeight(void)
{
    return _bottom_right.getY() - _top_left.getY();
}

int Paddle::getMoves(void)
{
    return _moves;
}

// Setters
void Paddle::setMoves(int moves)
{
    _moves = moves;
}

// Update
void Paddle::updatePosition(MoveDirection dir)
{
    int dist1;
    int dist2;
    int top;
    int bottom;
    switch (dir)
    {
        case MoveDirection::LEFT:
            dist1 = _top_left.getX();
            dist2 = _bottom_right.getX();
            top = dist1 <= _moves ? 0 : dist1 - _moves;
            bottom = top ? dist2 - _moves : dist2 - dist1;
            _top_left.setX(top);
            _bottom_right.setX(bottom); 
            break;

        case MoveDirection::RIGHT:
            dist1 = _top_left.getX();
            dist2 = MAX_WIDTH - _bottom_right.getX();
            bottom = dist2 <= _moves ? MAX_WIDTH : _bottom_right.getX() +  _moves;
            top = bottom == MAX_WIDTH ? dist1 + dist2 : dist1 + _moves;
            _top_left.setX(top);
            _bottom_right.setX(bottom);
            break;

        case MoveDirection::TOP:
            dist1 = _top_left.getY();
            dist2 = _bottom_right.getY();
            top = dist1 <= _moves ? 0 : dist1 - _moves;
            bottom = top ? dist2 - _moves : dist2 - dist1;
            _top_left.setY(top);
            _bottom_right.setY(bottom);
            break;

        case MoveDirection::BOTTOM:
            dist1 = _top_left.getY();
            dist2 = MAX_HEIGHT - _bottom_right.getY();
            bottom = dist2 <= _moves ? MAX_HEIGHT : _bottom_right.getY() +  _moves;
            top = bottom == MAX_WIDTH ? dist1 + dist2 : dist1 + _moves;
            _top_left.setY(top);
            _bottom_right.setY(bottom);
            break; 
    }
}