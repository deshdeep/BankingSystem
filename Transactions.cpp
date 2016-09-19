#include "User.h"
#include "Account.h"
#include "Transactions.h"


namespace Transactions
{
	
	bool openAccount(Account* newAccount)
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


	bool depositAmount(Account* currentAccount, double& amountToCredit)
	{
		if (amountToCredit < 0)
		{
			cout << "\nInvalid amount. Please enter amount greater than 0\n";
			return false;
		}
		else
		{
			double temp = currentAccount->getAccountBalance();
			temp += amountToCredit;
			currentAccount->setAccountBalance(temp);
			return true;
		}
	}


	bool withdrawalAmount(Account* currentAccount, double& amountToWithdraw)
	{
		if (amountToWithdraw < 0)
		{
			cout << "\nInvalid amount. Please enter amount greater than 0\n";
			return false;
		}
		else
		{
			double temp = currentAccount->getAccountBalance();
			temp -= amountToWithdraw;
			if (temp < 0)
			{
				cout << "\nYou do not have enough balance to withdraw the amount\n";
				return false;
			}
			else
			{
				currentAccount->setAccountBalance(temp);
				return true;
			}
		}
	}


	//Display All The Account Information of given account
	void displayAccount(Account*);

	//Display Transaction Information 
	void displayAllTransactions();

	void deleteAccount(Account* currentAccount)
	{
		delete currentAccount;
	}

	//To Transfer Amount From One Account To Another Account.
	bool transferAmount(Account*, Account*, double amount);
}