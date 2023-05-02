#ifndef YountNinja_HPP
#define YountNinka_HPP
#include <iostream>
#include <string.h>
#include "Point.hpp"
#include "Character.hpp"
using namespace std;
namespace ariel
{
    class YountNinja : public Character
    {
    private:
        int speed;

    public:
        YountNinja();
        YountNinja(string name, Point &);
        void move(const Character &);
        void slash(const Character &);
    };

};

#endif