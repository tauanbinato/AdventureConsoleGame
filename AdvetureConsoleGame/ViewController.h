#pragma once
#include "User.h"
#include "Enemy.h"
#include <string>


class ViewController
{
private:
	std::string gameVersion;

public:
	ViewController();
	ViewController(User _user, Enemy _enemy);
	~ViewController();

	void VC_Show_Failure();
	void VC_Show_Welcome();
	void VC_Show_Login();
	void VC_Register_Username();
	void VC_Register_Password();

	void VC_SetGameVersion(std::string);
};

