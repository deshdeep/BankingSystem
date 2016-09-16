/*
This class is to handle customers.
*/

#pragma once
#ifndef __ACCOUNT_H_INCLUDED__
#define __ACCOUNT_H_INCLUDED__
#include "User.h"
#include "InterfaceInputValidations.h"

using namespace std;

class Account : public User , public InterfaceInputValidations
{
	string AccountName;
	string AccountDoB;
	string AccountEmailId;
	string AccountPhoneNumber;
	string AccountAddress;

public :
	//Default Constructor
	Account();

	//Default Destructor
	~Account();
	//Account(string name, string dob, string emailId, string phoneNumber, string address, string id, string password){}
	
	//To get Account name
	const string& getAccountName();

	//To get Account date of birth
	const string& getAccountDoB();

	//To get Account Email id
	const string& getAccountEmailId();

	//To get Account phone number
	const string& getAccountPhoneNumber();

	//To get Account address
	const string& getAccountAddress();

	//To set Account name
	void setAccountName(const string& accountName);

	//To set Account date of birth
	void setAccountDoB(const string& accountDoB);
	
	//To set Account email id
	void setAccountEmailId(const string& accountEmailId);

	//To set Account phone number
	void setAccountPhoneNumber(const string& accountPhoneNumber);

	//TO set Account address
	void setAccountAddress(const string& accountAddress);

	//Already explained in InterfaceInputValidations.h
	bool checkForNumericInCharacterField(const string&);
	bool checkForCharacterInNumericField(const string&);
	bool checkForValidPhoneNumber(const string&);
	
	//Write once implemented
	bool openAccount(Account&);
};





#endif