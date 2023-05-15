#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <cassert>
#include <cmath>
#include "sources/Team.hpp"
using namespace ariel;
TEST_CASE("check class point")
{

    Point a(5.22, 6.22);
    Point b(1.2, 1.3223);
    double result = 0;

    for (int i = 0; i < 50; i++)
    {
        CHECK_NOTHROW(Point a(5.22 * i, 6.22 * i + 1.22));
        Point a(5.22 * i, 6.22 * i + 1.22);
        CHECK(5.22 * i == a.getX());
        CHECK(6.22 * i + 1.22 == a.getY());
        CHECK_NOTHROW(a.print());
        CHECK_NOTHROW(a.movetowrds(a, Point(52.2, 1.2), 2.2));
        result = ((a.getX() - b.getX()) * (a.getX() - b.getX())) + ((a.getY() - b.getY()) * (a.getY() - b.getY()));
        CHECK(a.distance(b) == sqrt(result));
    }
}
TEST_CASE("CHECK CLASS Cowboy")
{
    Point b(2.222, 5.22);
    Cowboy *demoCowboy = new Cowboy("avy", b);
    double result = 0;
    const char *letters = "abcdefghijklmnopqrstuvwxyz";
    string name = "";
    for (int j = 0; j < 26; j++)
    {
        for (int i = 0; i < 26; i++)
        {
            int index = rand() % 26; // Generate a random index between 0 and 25
            name += letters[index];
        }
        Point a(1.2355 * j, 2.233 * j);
        CHECK_NOTHROW(new Cowboy(name, a));
        Cowboy *randCowboy = new Cowboy(name, a);
        CHECK(randCowboy->getName() == name);
        CHECK(randCowboy->getLocation().getX() == a.getX());
        CHECK(randCowboy->getLocation().getY() == a.getY());
        CHECK_NOTHROW(randCowboy->print());
        result = ((a.getX() - b.getX()) * (a.getX() - b.getX())) + ((a.getY() - b.getY()) * (a.getY() - b.getY()));
        CHECK(randCowboy->distance(demoCowboy) == sqrt(result));
        CHECK(randCowboy->isAlive() == true);
    }
}
TEST_CASE("CHECK ALL CLASSES FOR NINJA")
{
    Point b(2.2214, 4.2862);
    const char *letters = "abcdefghijklmnopqrstuvwxyz";
    string name = "";
    for (int j = 0; j < 26; j++)
    {
        for (int i = 0; i < 26; i++)
        {
            int index = rand() % 26; // Generate a random index between 0 and 25
            name += letters[index];
        }
        Point a(8.2125 * j * 2, 9.113 * j);
        CHECK_NOTHROW(new OldNinja(name, a));
        CHECK_NOTHROW(new TrainedNinja(name, a));
        CHECK_NOTHROW(new YoungNinja(name, a));

        OldNinja *O = new OldNinja(name, a);

        TrainedNinja *T = new TrainedNinja(name, a);

        YoungNinja *Y = new YoungNinja("ivy", b);

        CHECK(O->getName() == name);
        CHECK(O->getLocation().getX() == a.getX());
        CHECK(O->getLocation().getY() == a.getY());
        CHECK(O->distance(Y) == a.distance(b));
        CHECK_NOTHROW(O->move(Y));
        CHECK_NOTHROW(O->slash(Y));

        CHECK(T->getName() == name);
        CHECK(T->getLocation().getX() == a.getX());
        CHECK(T->getLocation().getY() == a.getY());
        CHECK(T->distance(Y) == a.distance(b));
        CHECK_NOTHROW(O->move(Y));
        CHECK_NOTHROW(O->slash(Y));
    }
}
TEST_CASE("CHECK CLASS TEAM")
{
    const char *letters = "abcdefghijklmnopqrstuvwxyz";
    string name = "";
    for (int j = 0; j < 26; j++)
    {
        for (int i = 0; i < 26; i++)
        {
            int index = rand() % 26; // Generate a random index between 0 and 25
            name += letters[index];
        }
        Point a(2.2125 * j * 2, 5.113 * j);
        Cowboy *temp = new Cowboy(name, a);
        CHECK_NOTHROW(new Team(temp));
        Team *lead=new Team(temp);
        CHECK_NOTHROW(lead->print());
        

        
        
    }
}