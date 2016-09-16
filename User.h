/*
Class member variables are upper camel case.
These will always start with class name.
Class member functions are lower camel case.
These will always start with class name.
Get and Set function parameters will be lower camel case.
These will always start with class name.
Make sure all header files and interfaces files have comments over each member functions.
Always use checks for input provided before setting the value.
Always try to make code as readable as possible.

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
		//Default Constructor
		User();		

		//Default Destructor
		virtual ~User();

		//User(string id, string password){}

		//To get user id 
		const string& getUserId();

		//To get user password
		const string& getUserPassword();                           //check for by value or by reference or by address
		
		//To set user id
		void setUserId(const string& userId);

		//To set user password
		void setUserPassword(const string& userPassword);
		
};

#endif