#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

namespace ariel
{
    
    class Player
    { 

    public:
        string name ;
        
    

        Player(string name) :name (std::move(name))
        {
           
        };


        int static stacksize()
        {
           return 0;
        };

        
        int static cardesTaken()
        {
            return 0;
        };
      
};
}