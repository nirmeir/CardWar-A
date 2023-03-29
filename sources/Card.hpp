// #include <iostream>
// #include <stdio.h>
// #include <vector>

// #include "Player.hpp"

// using namespace std;


// enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };

// const int NUM_SUITS = 4;
// const int NUM_RANKS = 13;

// class Card {

// private:
//     int number;
//     Suit suit;

// public:
//     Card(int n, Suit s) {
//         number = n;
//         suit = s;
//     }

//     int getNumber() const {
//         return number;
//     }

//     Suit getSuit() const {
//         return suit;
//     }

//     void print() const {
//         string suitStr;
//         switch (suit) {
//             case CLUBS:
//                 suitStr = "Clubs";
//                 break;
//             case DIAMONDS:
//                 suitStr = "Diamonds";
//                 break;
//             case HEARTS:
//                 suitStr = "Hearts";
//                 break;
//             case SPADES:
//                 suitStr = "Spades";
//                 break;
//         }
//         cout << number << " of " << suitStr << endl;
//     }


//     vector<Card> Cards() {
//         vector<Card> cards;
//         for (int i = 0; i < NUM_SUITS; i++) {
//             for (int j = 1; j < NUM_RANKS; j++) {
//                 cards.push_back(Card(j, Suit(i)));
//             }
//         }
//         int n = cards.size();
//         for (int i = n-1; i > 0; i--) {
//         // generate a random index j between 0 and i
//         int j = rand() % (i+1);
//         // swap the cards at indices i and j
//         Card temp = cards[i];
//         cards[i] = cards[j];
//         cards[j] = temp;
//     }

//         return cards;
//     }


// };

    
