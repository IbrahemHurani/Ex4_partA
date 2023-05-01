#ifndef OLD_NINJA_HPP
#define OLD_NINJA_HPP
#include <iostream>
#include<string.h>
#include"Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
using namespace std;
namespace ariel
{
    class OldNinja : public Character
    {
    private:
        int speed;

    public:
        OldNinja();
        OldNinja(string name ,Point &);
        void move(const Character&);
        void slash(const Character&);

    };

};

#endif