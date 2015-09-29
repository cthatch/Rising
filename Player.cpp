//Player.cpp

#include "Player.h"
//turns the plot line
void Player::turns_bad(){
	is_good = false;
}




//setter functions
void Player::set_health(int h){
	health = h;
}
void Player::set_magic(int m){
	magic = m;
}
void Player::set_defense(int d){
	defense = d;
}
void Player::set_strength(int s){
	strength = s;
}

//getter functions
bool Player::get_isgood(){
	return is_good;
}
int Player::get_magic(){
	return magic;
}
int Player::get_strength(){
	return strength;
}
int Player::get_health(){
	return health;
}
int Player::get_defense(){
	return defense;
}