#include "User.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int User::attack(Villains& enemy)
{
	srand(time(NULL));
	int damage = rand()%6 +5;	
	enemy.health-=damage;
	cout<<"You used your sowrd! You inflicted: "<<damage<<"to the enemy!"<<endl;
   	return damage;
}

int User::potions(User)
{
	if (potions==0)
		cout<<"You are out of potions!"<<endl;
	else
	{
		cout<<"You used a potion!"<<endl;
		cout<<"You have gained ten HP back!"<<endl;
		potions=potions-1;
		currenthealth=currenthealth+10;
		return potions;
	}
}

int User::health()
{
	int health= m_hp;
	return health;
}

int User::increaseHP()
{
	health = health +10;
	return health;
}

User::User(string username)
{
	string name=username;//how would the string name get called if we have it in gameplay?
	int health=`100;
	int potions=3;
}
