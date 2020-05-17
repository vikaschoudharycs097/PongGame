/**************************************************
 * class Point that define a point in 2 Dimension
 * 
 * @author Vikas Choudhary
 * @date 18.05.2020
 *************************************************/

class Point
{
private:
    float _x;
    float _y;

public:
    Point();
    Point(float x, float y);

    // Getters
    float getX(void) const;
    float getY(void) const;

    // Setters
    void setX(float x);
    void setY(float y);

    // Update 
    void updatePoint(float x_delta, float y_delta);
};