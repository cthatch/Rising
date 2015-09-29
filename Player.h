//Player.h
//Controls the Player
#include "Item.h"
#include <string>
using namespace std;
class Player{
private:
	int health;
	int strength;
	int magic;
	int defense;
	string player_name;
	bool is_good = true;
	Item equipped_items[5];
public:
	Player(){
		health = 100;
		strength = 10;
		magic = 10;
		defense = 10;
	}
	void turns_bad();
	void set_health(int h);
	void set_magic(int m);
	void set_strength(int s);
	void set_defense(int d);
	bool get_isgood();
	int get_health();
	int get_magic();
	int get_defense();
	int get_strength();
	//Item[] get_equip_items();
	Item get_equipped_item(string type);
	~Player();

};