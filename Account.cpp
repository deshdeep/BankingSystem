#include "Account.h"
#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;


	Account::Account()
	{
		cout << "\n Account class constructor was called\n";
	}

	Account::~Account()
	{
		cout << "\n Account class destructor was called\n";
	}

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

	double& Account::getAccountBalance()
	{
		return this->AccountBalance;
	}

	void Account::setAccountName(const string& accountName)
	{
		this->AccountName = accountName;
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

	void Account::setAccountBalance(double& accountBalance)
	{
		this->AccountBalance = accountBalance;
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
		if ((tempString.size()) != 10)
		{
			return false;
		}
		return true;
	}

	//virtual bool checkForValidDate(const string& dateToCheck)
	//{
	//	//Implement this function here itself	and add to account.h too before implementing it in future
	//}

	bool Account::openAccount(Account* newAccount)
	{
		string tempString;
		int tempInteger;

		cout << "\nEnter UserId\n";
		cin >> tempString;
		if (newAccount->checkForNumericInCharacterField(tempString))
		{
			newAccount->setUserId(tempString);
		}
		else
		{
			cout << "\nInvalid input. Numerals not allowed in  character fields.\n";
			return false;
		}

		cout << "\nEnter User Password\n";
		cin >> tempString;
		newAccount->setUserPassword(tempString);

		cout << "\nEnter Account Name\n";
		cin >> tempString;
		if (newAccount->checkForNumericInCharacterField(tempString))
		{
			newAccount->setAccountName(tempString);
		}
		else
		{
			cout << "\nInvalid input. Numerals not allowed in  character fields.\n";
			return false;
		}
		

		cout << "\nEnter Account Date of birth\n";
		cin >> tempString;
		newAccount->setAccountDoB(tempString);
		

		cout << "\nEnter Account Email Id\n";
		cin >> tempString;
		newAccount->setAccountEmailId(tempString);

		cout << "\nEnter Account Phone Number\n";
		cin >> tempString;
		if (newAccount->checkForCharacterInNumericField(tempString) && newAccount->checkForValidPhoneNumber(tempString))
		{
			newAccount->setAccountPhoneNumber(tempString);
		}
		else
		{
			cout << "\nInvalid input.Either characters were entered or entered phone number is not of 10 digits.\n";
			return false;
		}
		

		cout << "\nEnter Account Address\n";
		cin >> tempString;
		newAccount->setAccountAddress(tempString);


		return true;
	}

	


