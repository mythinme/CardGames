#pragma once
#include "Hand.h"
#include<string>
class Player
{
	private:
		std::string name;
		Hand hand;
	
	public:
		Player(std::string, Hand);
		void collectHand(Card c);
		void playHand(Card c);

		void DisplayInfo();
		void Assign(std::string& iName, Hand& iHand);
};

