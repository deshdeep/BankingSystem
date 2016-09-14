/*
This class is to handle customers.
*/

#pragma once
#ifndef __ACCOUNT_H_INCLUDED__
#define __ACCOUNT_H_INCLUDED__
#include "User.h"
#include "InputValidations.h"

using namespace std;

class Account : public User , public InputValidations
{
	string AccountName;
	string AccountDoB;
	string AccountEmailId;
	string AccountPhoneNumber;
	string AccountAddress;

public :
	Account(){}
	Account(string name, string dob, string emailId, string phoneNumber, string address, string id, string password){}
	const string getAccountName();
	const string getAccountDoB();
	const string getAccountEmailId();
	const string getAccountPhoneNumber();
	const string getAccountAddress();
	void setAccountName(const string accountName);
	void setAccountDoB(const string accountDoB);
	void setAccountEmailId(const string accountEmailId);
	void setAccountPhoneNumber(const string accountPhoneNumber);
	void setAccountAddress(const string accountAddress);
	//const Account& openAccount();
};





#endif