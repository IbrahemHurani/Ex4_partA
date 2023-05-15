#ifndef TEAM_HPP
#define TEAM_HPP
#include <vector>
#include "Point.hpp"
#include "Ninja.hpp"
#include "Character.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
using namespace std;
namespace ariel
{
    class Team
    {
    private:
        Character *leader;
        vector<Character *> group_Warriors;

    public:
        Team();
        Team(Character *);
        void add(Character *);
        void attack(Team *);
        int stillAlive();
        void print();
    };

};
#endif