/*
Class member variables are upper camel case.
These will always start with class name.
Class member functions are lower camel case.
These will always start with class name.
Get and Set function parameters will be lower camel case.
These will always start with class name.
Make sure all header files and interfaces files have comments over each member functions
*/

/*
This class is the base class for all types of users whether account holder or admin
*/

#pragma once

#ifndef __USER_H_INCLUDED__
#define __USER_H_INCLUDED__

#include<string>
using namespace std;



class User
{
		string UserId;                  //use random function for these two variables for first time account creation
		string UserPassword;

public :
		User(){}
		//User(string id, string password){}
		const string& getUserId();
		const string& getUserPassword();                           //check for by value or by reference or by address
		void setUserId(const string& userId);
		void setUserPassword(const string& userPassword);
		virtual ~User(){}
};

#endif