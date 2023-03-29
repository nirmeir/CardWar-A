#include "sources/Game.hpp"
#include "doctest.h"
#include <iostream>
#include <sstream>
#include <cassert>

using namespace std;
using namespace ariel;

TEST_CASE("Check player name"){
    Player a("Nir");
    CHECK (a.name=="Nir");
}

TEST_CASE("Check game"){
    Player a("Nir");
    Player b("Meir");
    ariel::Game game(a,b);
    CHECK (a.name=="Nir");
    CHECK (b.name=="Meir");
}
TEST_CASE("Check playTurn"){
    Player a("Nir");
    Player b("Meir");
    ariel::Game game(a,b);
    CHECK_NOTHROW(game.playTurn()); 
    CHECK_NOTHROW(game.printLastTurn()); //print the last play


}
TEST_CASE("Check printLastTurn"){
    Player a("Nir");
    Player b("Meir");
     ariel::Game game(a,b);
     game.playTurn();
    CHECK_NOTHROW(game.printLastTurn()); //print the last play
}
TEST_CASE("Check playAll"){
    Player a("Nir");
    Player b("Meir");
     ariel::Game game(a,b);
    CHECK_NOTHROW(game.playAll());

}
TEST_CASE("Check printWiner"){
    Player a("Nir");
    Player b("Meir");
     ariel::Game game(a,b);
    CHECK_NOTHROW(game.playAll()); 
    CHECK_NOTHROW(game.printWiner());

}
TEST_CASE("Check printWiner"){
    Player a("Nir");
    Player b("Meir");
     ariel::Game game(a,b);
    game.playAll();
    CHECK_NOTHROW(game.printWiner()); // should be a winner
}

TEST_CASE("Check game"){
    Player a("Nir");
    Player b("Meir");
    ariel::Game game(a,b);
    ariel::Game game2(a,b);
    CHECK (game.p1.name==game2.p1.name);
    CHECK (game.p2.name==game2.p2.name);
}


TEST_CASE("Check printLog"){
    Player a("Nir");
    Player b("Meir");
     ariel::Game game(a,b);
    CHECK_NOTHROW(game.printLog()); // there is no logs
}

TEST_CASE("Check printLog"){
    Player a("Nir");
    Player b("Meir");
    ariel::Game game(a,b);
    game.playAll();
    CHECK_NOTHROW(game.printLog()); // should print all the moves are played
}

TEST_CASE("Check printLog"){
    Player a("Nir");
    Player b("Meir");
     ariel::Game game(a,b);
    game.playAll();
    CHECK_NOTHROW(a.cardesTaken()); // should print the amount of cards this player has won. 
    CHECK_NOTHROW(b.cardesTaken()); // should print the amount of cards this player has won. 

}
TEST_CASE("Check printStats"){
    Player a("Nir");
    Player b("Meir");
     ariel::Game game(a,b);
    CHECK_NOTHROW(game.printStats()); // should print the same statistic
}


TEST_CASE("Check StackSize"){ 
    Player a("Nir");
    Player b("Meir");
    ariel:: Game game (a,b);
    CHECK (a.stacksize()==0); // the test should be passed if there is no draw

}

TEST_CASE("Check game"){
    Player a("Nir");
    Player b("Meir");
    ariel::Game game(a,b);
    CHECK (game.p1.name=="Nir");
    CHECK (game.p2.name=="Meir");
}


































