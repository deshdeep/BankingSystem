#include "User.h"
#include <iostream>
using namespace std;


	
	
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
	
	

