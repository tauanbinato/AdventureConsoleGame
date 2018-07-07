
#include "User.h"
#include "GameManager.h"
#include <iostream>

int main()
{
	//GameManager::gameVersion = 1.0;
	GameManager *mainGM = nullptr;
	mainGM = new GameManager();
	

	delete(mainGM);
	return 0;
}