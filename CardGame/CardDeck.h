#pragma once;

#include <vector>
#include "Card.h"


class CardDeck
{
public:
    CardDeck();
    ~CardDeck();

    void PrintAllCard();
    void ShuffleCards();

    std::vector<Card> Deal();

private:
    std::vector<Card> mDeck;
};