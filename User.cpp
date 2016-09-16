#include "User.h"
#include <iostream>
using namespace std;

	User::User()
	{
		cout << "\n User class constructor was called\n";
	}
	
	User::~User()
	{
		cout << "\n User class destructor was called\n";
	}

	/*User(string id, string password)
	{
		this->UserId = id;
		this->UserPassword = password;
	}*/

	const string& User::getUserId()
	{
		return UserId;
	}
	const string& User::getUserPassword()
	{
		return UserPassword;
	}
	void User::setUserId(const string& userId)
	{
		this->UserId = userId;
	}
		void User::setUserPassword(const string& userPassword)
	{
		this->UserPassword = userPassword;
	}

	
	
	

