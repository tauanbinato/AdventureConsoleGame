#pragma once
#include <list>
#include "User.h"
#include "Enemy.h"


class GameManager
{
protected:
	
	std::string gameVersion = "1.0";
	std::list<User> users;
	std::list<Enemy> enemys;
	void RegisterUser();

	void GameLoop();

public:
	

	GameManager();
	~GameManager();


	User GetUser(int i);

	
};

