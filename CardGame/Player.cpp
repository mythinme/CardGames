#include "Player.h"
#include<iostream>
Player::Player(std::string iName, Hand iHand) : name(iName), hand(iHand)
{

}

void Player::collectHand(Card c)
{
	hand.collectCard(c);
}

void Player::playHand(Card c)
{
	hand.playCard(c);
}

void Player::DisplayInfo()
{
	std::cout << name << " ";
	hand.show();
	std::cout << std::endl;
}

void Player::Assign(std::string& iName, Hand& iHand)
{
	name = iName;
	hand = iHand;
}