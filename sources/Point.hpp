#ifndef Point_HPP
#define Point_HPP

#include <iostream>
using namespace std;
namespace ariel
{
    class Point
    {
    private:
        double x;
        double y;

    public:
        Point();
        Point(double ,double);
        double getX();
        double getY();

        double distance(const Point &otherP);
        void print();
        Point movetowrds(const Point &source,const Point &target,double);
        


    };

};

#endif