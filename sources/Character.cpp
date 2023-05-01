#include<iostream>
#include "Character.hpp"

using namespace std;
namespace ariel{
    Character::Character():Name(""),Location(Point(0,0)),Hit(0){

    }
    Character::Character(string name,Point &location,int hit):Name(name),Location(location),Hit(hit){

    }
    string Character::getName(){
        return "";

    }
    Point Character::getLocation(){
        Point p;
        return p;

    }
    void Character::Print(){

    }
    void Character::hit(){

    }
    bool Character::isAlive(){
        return true;
    }
    double Character::distance(const Character &other){
        return 0.0;
    }



};