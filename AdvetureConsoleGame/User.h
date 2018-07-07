#pragma once
#include <string>
class User
{

private:
	std::string username;
	std::string password;

public:
	User(std::string _username, std::string _password);
	User();
	~User();

	std::string GetName();
};

