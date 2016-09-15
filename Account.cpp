#include "Account.h"
#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;




	/*Account(string name, string dob, string emailId, string phoneNumber, string address, string id, string password) : User(id, password)
	{
	this->AccountName = name;
	}*/

	const string& Account::getAccountName()
	{
		return AccountName;
	}

	const string& Account::getAccountDoB()
	{
		return AccountDoB;
	}

	const string& Account::getAccountEmailId()
	{
		return AccountEmailId;
	}

	const string& Account::getAccountPhoneNumber()
	{
		return AccountPhoneNumber;
	}

	const string& Account::getAccountAddress()
	{
		return AccountAddress;
	}

	void Account::setAccountDoB(const string& accountDoB)
	{
		this->AccountDoB = accountDoB;
	}

	void Account::setAccountEmailId(const string& accountEmailId)
	{
		this->AccountEmailId = AccountEmailId;
	}

	void Account::setAccountPhoneNumber(const string& accountPhoneNumber)
	{
		this->AccountPhoneNumber = accountPhoneNumber;
	}

	void Account::setAccountAddress(const string& accountAddress)
	{
		this->AccountAddress = accountAddress;
	}

	const Account& Account::openAccount()
	{
			
	}

	bool Account::checkForNumericInCharacterField(const string& stringToCheck)
	{
		string tempString = stringToCheck;
		for (string::iterator it = tempString.begin(); it != tempString.end(); ++it)
		{
			if (isdigit(*it))
			{
				return false;
			}
		}
		return true;
	}
	
	bool Account::checkForCharacterInNumericField(const string& numberToCheck)
	{
		string tempString = numberToCheck;
		for (string::iterator it = tempString.begin(); it != tempString.end(); ++it)
		{
			if (!(isdigit(*it)))
			{
				return false;
			}
		}
		return true;
	}

	bool Account::checkForValidPhoneNumber(const string& phoneNumberToCheck)
	{
		string tempString = phoneNumberToCheck;
		if ((unsigned int)(tempString.length) != (unsigned int)10)
		{
			return false;
		}
		return true;
	}

	//virtual bool checkForValidDate(const string& dateToCheck)
	//{
	//	//Implement this function here itself	
	//}






