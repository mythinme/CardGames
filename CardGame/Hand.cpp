#include "Hand.h"
#include "Card.h"

Hand::Hand()
{
}

void Hand::collectCard(Card& c)
{
	cards.push_back(c);
}

void Hand::playCard(Card& c)
{
	//cards.erase(c);
}

void Hand::show()
{
	for (Card c : cards)
		c.PrintCard();
}