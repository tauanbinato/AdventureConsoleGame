#include "ViewController.h"
#include <stdio.h>
#include <iostream>
#include <iomanip> 
#include "GameManager.h"

using std::string;
using std::cout;
using std::endl;

ViewController::ViewController()
{
}

ViewController::ViewController(User _user, Enemy _enemy)
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

	cout << "Welcome to Adveture Console ||";
	cout << " Version " << gameVersion << " || \n" <<endl;
	return;
}

void ViewController::VC_Show_Login() {

	return;
}

void ViewController::VC_Register_Username()
{
	cout << "I can see you are a new user.." << endl;
	cout << "Please enter a username:" << endl;
}

void ViewController::VC_Register_Password()
{
	cout << "Please enter a new password:" << endl;
}

void ViewController::VC_SetGameVersion(std::string v)
{
	gameVersion = v;
}
