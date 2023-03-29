#pragma once
#include <iostream>
#include <stdio.h>
#include "Player.hpp"


namespace ariel
{

    class Game
    {
    public:
        Player p1;
        Player p2;

  
    
        Game(Player & player1, Player & player2) :p1(player1),p2(player2)
        {
           
        };
      
     

        void static playTurn()
        {
            
            cout << "playTurn" << endl;
        };
        
        void static printLastTurn()
        {
            cout << "printLastTurn" << endl;
        };
        void static playAll()
        {
            cout << "playAll" << endl;
        };
        void static printWiner()
        {
            cout << "printWiner" << endl;
        };
        void static printLog()
        {
            cout << "printLog" << endl;
        };
        void static printStats()
        {
            cout << "printStats" << endl;
        };
        

    };
}
