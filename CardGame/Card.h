#pragma once

class Card
{
public:

    enum Rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
    enum Suit { HEART = 1, DIAMOND, CLUB, SPADE };
private:

    Rank mRank;
    Suit mSuit;
    bool mIsDisplayed;

public:

    virtual ~Card();
    Card(Rank iRank, Suit iSuit, bool isDisplayed);
    Rank GetRank();
    Suit GetSuit();

    void PrintCard();

    void Show();
    int Compare(Card c);

    virtual int ProvideFaceValue();

};