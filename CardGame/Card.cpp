#include "Card.h"
#include<iostream>

Card::Card(Rank iRank, Suit iSuit, bool isDisplayed) : mRank(iRank), mSuit(iSuit), mIsDisplayed(isDisplayed)
{

}

Card::~Card()
{

}

Card::Rank Card::GetRank()
{
    return Rank();
}
Card::Suit Card::GetSuit()
{
    return Suit();
}

void Card::PrintCard()
{
    if (mSuit == Card::SPADE)
        std::cout << "S-";
    else if (mSuit == Card::CLUB)
        std::cout << "C-";
    else if (mSuit == Card::HEART)
        std::cout << "H-";
    else
        std::cout << "D-";

    if (mRank == Card::JACK)
        std::cout << "J" << " | ";
    else if (mRank == Card::QUEEN)
        std::cout << "Q" << " | ";
    else if (mRank == Card::KING)
        std::cout << "K" << " | ";
    else if (mRank == Card::ACE)
        std::cout << "A" << " | ";
    else
        std::cout << mRank << " | ";
}

void Card::Show()
{
}

int Card::Compare(Card c)
{
    return 0;
}

int Card::ProvideFaceValue()
{
    return static_cast<int>(mRank);
}

