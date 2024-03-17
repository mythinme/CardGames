#pragma once
#include "Player.h"
#include "CardDeck.h"
#include "Hand.h"
#include<iostream>
class Dealer
{
	private:
		std::vector<Player> players;

	public:
		void DealCards(std::vector<Card>& cd);
		void createPlayers(std::vector<std::string>& playerNames, std::vector<Card>& cd);
};

