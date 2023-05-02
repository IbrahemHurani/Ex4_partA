#ifndef Trained_HPP
#define Trained_HPP
#include <iostream>
#include<string.h>
#include"Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
#include "YountNinja.hpp"
#include "TrainedNinja.hpp"
using namespace std;
namespace ariel
{
    class TrainedNinja : public Character
    {
    private:
        int speed;

    public:
        TrainedNinja();
        TrainedNinja(string name ,Point &);
        void move(const Character&);
        void slash(const Character&);

    };

};

#endif