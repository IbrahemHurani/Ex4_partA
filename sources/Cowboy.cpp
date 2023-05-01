#include"Cowboy.hpp"
#include"Character.hpp"
#include"OldNinja.hpp"
using namespace std;
namespace ariel{
    Cowboy::Cowboy(){

    }
    Cowboy::Cowboy(string name,Point &location):Character(name,location,110){

    }
    bool Cowboy::hasboolets(){
        return true;

    }
    void Cowboy::reload(){

    }
    void Cowboy::shoot(const Character& enemy){
        
    }

};