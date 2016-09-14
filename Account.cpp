#include "Account.h"

class Account : public User, public InputValidations
{
	string AccountName;
	string AccountDoB;
	string AccountEmailId;
	string AccountPhoneNumber;
	string AccountAddress;

public:
	Account(){}
	Account(string name, string dob, string emailId, string phoneNumber, string address, string id, string password) : User(id, password)
	{
		this->AccountName = name;
	}
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