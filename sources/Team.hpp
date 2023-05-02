#ifndef TEAM_HPP
#define TEAM_HPP
#include<vector>
#include "Character.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp"
#include"YountNinja.hpp"
#include"TrainedNinja.hpp"
using namespace std;
namespace ariel
{
    class Team
    {
        private:
            Character& leader;
            vector<Character*> group_Warriors;
        public:
            Team();
            Team(Character &);
            void add(Character&);
            void attack(Team&);
            int stillAlive();
            void print();

        
    };
    class Team2
    {
        private:
            Character& leader;
            vector<Character*> group_Warriors;
        public:
            Team2();
            Team2(Character &);
            void add(Character&);
            void attack(Team&);
            int stillAlive();
            void print();

        
    };
    class SmartTeam
    {
        private:
            Character& leader;
            vector<Character*> group_Warriors;
        public:
            SmartTeam();
            SmartTeam(Character &);
            void add(Character&);
            void attack(Team&);
            int stillAlive();
            void print();

        
    };
    
};
#endif