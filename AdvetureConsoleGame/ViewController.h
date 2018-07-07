#pragma once
#include "User.h"
#include "Enemy.h"

class ViewController
{
private:
	User userInView;
	Enemy enemyinView;

public:
	ViewController();
	ViewController(User _user, Enemy _enemy);
	~ViewController();

	void VC_Show_Failure();
	void VC_Show_Welcome();
	void VC_Show_Login();
};

