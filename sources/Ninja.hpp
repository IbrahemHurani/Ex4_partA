#ifndef _NINJA_HPP
#define _NINJA_HPP
#include <iostream>
#include<string.h>
#include"Point.hpp"
#include "Character.hpp"
using namespace std;
namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed;

    public:
        Ninja();
        Ninja(string name ,const Point &);
        void move(const Character*);
        void slash(const Character*);

    };

};
#endif