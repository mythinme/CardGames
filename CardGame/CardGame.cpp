
#include <iostream>
#include "CardDeck.h"
#include "Dealer.h"

int main()
{
    CardDeck cd;
    cd.ShuffleCards();
    Dealer d;
    std::vector<Card> cards = cd.Deal();
    int num = 0,i =0;

    while (num < 2) {
        std::cout << "Please enter ujmber of players : ";
        std::cin >> num;
        if (num < 2)
            std::cout << " Insufficient players" << std::endl;
    }
    std::string name = "";
    std::vector<std::string> players;
    while (i < num) {
        std::cout << "Please enter name for player "<< 1+(i++)<<" : ";
        std::cin >> name;
        players.push_back(name);
    }
    d.createPlayers(players, cards);

}
