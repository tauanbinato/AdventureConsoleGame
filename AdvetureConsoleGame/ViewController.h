#pragma once
#include "User.h"
#include "Enemy.h"
#include <string>
#include "GameManager.h"

class ViewController : public GameManager
{

public:
	ViewController();
	~ViewController();


	void VC_Show_Menu();
	void VC_Show_Failure();
	void VC_Show_Welcome();
	void VC_Show_Login();
	void VC_Register_Username();
	void VC_Register_Password();

	
};

