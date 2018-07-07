
#include "User.h"
#include "GameManager.h"
#include "ViewController.h"
#include <iostream>

int main()
{
	
	GameManager *mainGM = new GameManager();
	ViewController *viewC = new ViewController();
	

	delete(mainGM);
	return 0;
}