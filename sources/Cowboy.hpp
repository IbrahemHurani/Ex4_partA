#include<iostream>
#include<string.h>
#ifndef COWBOY_HPP
#define COWBOY_HPP
#include "Point.hpp"
#include "Character.hpp"
#include "OldNinja.hpp"
using namespace std;
namespace ariel{
    class Cowboy:public Character{
        private:
            int bullets=6;
            int hit=110; 
        public:
            Cowboy();
            Cowboy(string name,Point&);
            bool hasboolets();
            void reload();
            void shoot(const Character&);






    };
};
#endif