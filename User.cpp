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
	const string& getUserId();
	const string& getUserPassword();                           //check for by value or by reference or by address
	void setUserId(const string& userId);
	void setUserPassword(const string& userPassword);
	virtual ~User(){}

};