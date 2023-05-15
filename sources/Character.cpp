#include<iostream>
#include "Character.hpp"

using namespace std;
namespace ariel{
    Character::Character():Name(""),Location(Point(0,0)),Hit(0){

    }
    Character::Character(string name,const Point &location):Name(name),Location(location){

    }
    string Character::getName(){
        return this->Name;

    }
    Point Character::getLocation(){
        return this->Location;

    }
    string Character::print(){
        if(this->isAlive()){
            return "Name:"+this->getName()+",Location "+this->Location.convert_ToString();
        }
        return this->getName();

    }
    void Character::hit(int damage){

    }
    bool Character::isAlive(){
        return true;
    }
    double Character::distance(const Character *other){
        return this->Location.distance(other->Location);
    }



};
