#include "Point.hpp"
using namespace std;
namespace ariel{
    Point::Point():x(0),y(0){

    }
    Point::Point(double inX,double inY):x(inX),y(inY){

    }
    double Point::getX(){
        return this->x;
    }
    double Point::getY(){
        return this->y;
    }
    double Point::distance(const Point &otherP){
        return 0;
    }
    void Point::print(){

    }
    Point Point::movetowrds(const Point &source,const Point &target,double){
        Point P;
        return P;
    }

};