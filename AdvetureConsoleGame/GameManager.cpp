#include "GameManager.h"
#include <iostream>
#include <string>


GameManager::GameManager()
{
	activeView = new ViewController();
	activeView->VC_SetGameVersion(gameVersion);
	activeView->VC_Show_Welcome();
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

User GameManager::GetUser(int i)
{
	std::list<User>::iterator it;
	try {
		// It returns a new iterator pointing to n position after the
		// base iterator given as first argument
		it = std::next(users.begin(), i);
	}
	catch (...){
		
	}
	return *it;
}

/*
static float GameManager::GetGameVersion()
{
	return gameVersion;
}

*/


