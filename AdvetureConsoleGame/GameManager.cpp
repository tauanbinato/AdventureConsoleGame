#include "GameManager.h"
#include <iostream>
#include <string>

GameManager::GameManager()
{
	activeView = new ViewController();
	RegisterUser();
}


GameManager::~GameManager()
{
	delete(activeView);
}

// Methods ---------------------------------------------

void GameManager::RegisterUser()
{	
	activeView->VC_Register_Username();
	std::string username;
	std::cin >> username;

	activeView->VC_Register_Password();
	std::string password;
	std::cin >> password;

	User *newUser = new User(username,password);
	users.push_back(*newUser);
	
}

void GameManager::GetUser(int i)
{
}

//


