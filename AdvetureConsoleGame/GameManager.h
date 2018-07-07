#pragma once
#include <list>
#include "User.h"
#include "Enemy.h"
#include "ViewController.h"

class GameManager
{
private:
	std::list<User> users;
	std::list<Enemy> enemys;
	std::list<int>::iterator it;

public:
	ViewController *activeView;

	GameManager();
	~GameManager();

	void RegisterUser();
	
	

};

