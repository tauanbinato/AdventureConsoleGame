#include "ViewController.h"
#include <stdio.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

ViewController::ViewController()
{
}

ViewController::ViewController(User _user, Enemy _enemy)
	:
	userInView(_user),
	enemyinView(_enemy)
{

}

ViewController::~ViewController()
{
}


//Methods

void ViewController::VC_Show_Failure() {
	return;
}

void ViewController::VC_Show_Welcome() {

	cout << "Welcome to Adveture Console" << endl;
	cout << "Press any key to continue.." << endl;
	return;
}

void ViewController::VC_Show_Login() {

	return;
}
