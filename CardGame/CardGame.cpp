
#include <iostream>
#include "CardDeck.h"
#include "Dealer.h"

int main()
{
    CardDeck cd;
    cd.ShuffleCards();
    //cd.PrintAllCard();
    Dealer d;
    std::vector<Card> cards = cd.Deal();
    std::vector<std::string> players = {"A", "B", "C", "D", "E"};
    d.createPlayers(players, cards);

}
