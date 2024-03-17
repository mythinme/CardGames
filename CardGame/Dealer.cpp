#include "Dealer.h"
#include "Card.h"
#include "CardDeck.h"
#include "Player.h"
#include "Hand.h"
void Dealer::DealCards(std::vector<Card>& cd)
{
	int size = players.size();
	for (int i = 0; i < cd.size(); i++)
	{
		players[i % size].collectHand(cd[i]);
	}
	for (int i = 0; i < size; i++)
	{
		players[i].DisplayInfo();
	}
}

void Dealer::createPlayers(std::vector<std::string>& playerNames, std::vector<Card>& cd)
{
	int size = playerNames.size();
	players.reserve(size);
	Hand h;
	
	for (int i = 0; i < size; i++)
	{
		Player p("", h);
		p.Assign(playerNames[i], h);
		players.push_back(p);
	}
	DealCards(cd);
}
