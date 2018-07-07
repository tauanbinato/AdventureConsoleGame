#include "ViewController.h"
#include <stdio.h>
#include <iostream>
#include <iomanip> 


using std::string;
using std::cout;
using std::endl;

ViewController::ViewController()
{
}

ViewController::~ViewController()
{
}


//Methods

void ViewController::VC_Show_Menu()
{

}

void ViewController::VC_Show_Failure() {
	return;
}

void ViewController::VC_Show_Welcome() {

	cout << "Welcome to Adveture Console ||";
	cout << " Version " << GameManager::gameVersion << " || \n" <<endl;
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


