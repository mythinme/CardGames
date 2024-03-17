#include "CardDeck.h"
#include "Card.h"
#include "Player.h"
#include<iostream>
#include<algorithm>

CardDeck::CardDeck() :mDeck()
{
    mDeck.reserve(52);
    Card::Rank inputRank = Card::ACE;

    while (inputRank <= Card::KING)
    {

        Card::Suit inputSuit = Card::HEART;

        while (inputSuit <= Card::SPADE)
        {   
            Card c(inputRank, inputSuit, false);
            mDeck.push_back(c);
            inputSuit = static_cast<Card::Suit>(static_cast<int>(inputSuit) + 1);
        }
        inputRank = static_cast<Card::Rank>(static_cast<int>(inputRank) + 1);
    }

}

CardDeck::~CardDeck()
{
    mDeck.clear();
}

void CardDeck::PrintAllCard()
{
    for (Card card : mDeck)
    {
        card.PrintCard();
    }
}

void CardDeck::ShuffleCards()
{
    std::random_shuffle(mDeck.begin(), mDeck.end());
}

std::vector<Card> CardDeck::Deal()
{
    return mDeck;
}
