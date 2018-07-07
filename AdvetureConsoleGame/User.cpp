#include "User.h"

using std::string;

User::User(string _username, string _password)
	: username(_username),
	password(_password)
{
}

User::User(){}

User::~User()
{
}
