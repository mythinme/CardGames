#pragma once
#include "Card.h"
#include<vector>
class Hand
{
	private:
		std::vector<Card> cards;
	public:
		void collectCard(Card& c);
		void playCard(Card& c);
		void show();
		Hand();
};

