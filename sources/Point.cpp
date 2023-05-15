#include "Point.hpp"
using namespace std;
namespace ariel
{
    Point::Point() : x(0), y(0)
    {
    }
    Point::Point(double inX, double inY) : x(inX), y(inY)
    {
    }
    double Point::getX()
    {
        return this->x;
    }
    double Point::getY()
    {
        return this->y;
    }
    double Point::distance(const Point &otherP)
    {
        double result =((this->getX()-otherP.x)*(this->getX()-otherP.x))+((this->getY()-otherP.y)*(this->getY()-otherP.y));
        return sqrt(result);
    }
    void Point::print()
    {
        cout << "(" << this->x << "," << this->y << ")" << endl;
    }
    Point Point::movetowrds(const Point &source, const Point &target, double)
    {
        Point P;
        return P;
    }
    string Point::convert_ToString(){
        return "("+to_string(this->x)+","+to_string(this->y)+")";
    }

};
