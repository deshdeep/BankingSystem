#include "User.h"

class User
{
	string UserId;
	string UserPassword;
public : 
	User(){}
	
	User(string id, string password)
	{
		this->UserId = id;
		this->UserPassword = password;
	}


};