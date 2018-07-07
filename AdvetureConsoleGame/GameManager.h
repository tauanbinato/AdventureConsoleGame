#pragma once
#include <list>
#include "User.h"
#include "Enemy.h"
#include "ViewController.h"

class GameManager
{
private:
	
	std::string gameVersion = "1.0";
	std::list<User> users;
	std::list<Enemy> enemys;
	void RegisterUser();

public:
	
	ViewController *activeView;

	GameManager();
	~GameManager();


	User GetUser(int i);

	
};

