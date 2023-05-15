#include"Cowboy.hpp"
#include"Character.hpp"
using namespace std;
namespace ariel{
    Cowboy::Cowboy(){

    }
    Cowboy::Cowboy(string name, Point &location):Character(name,location){

    }
    bool Cowboy::hasboolets(){
        return true;

    }
    void Cowboy::reload(){

    }
    void Cowboy::shoot(const Character* enemy){
        
    }

};