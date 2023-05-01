#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string.h>
#include "Point.hpp"
using namespace std;
namespace ariel
{
    class Character
    {
    private:
        Point Location;
        string Name;
        int Hit;

    public:
        Character(string, Point &, int);
        Character();
        string getName();
        Point getLocation();
        void Print();
        double distance(const Character &other);
        bool isAlive();
        void hit();
    };

}
#endif