/*
This header will contain general functions required for transactions. Not creating static class(this class will not be bunch of static functions) rather creating these functions 
within transaction namespace. Using the advantage of C/C++ i.e. it allows free floating functions hence classes for everything is not required. Using
namespace so that I can keep all functions within one group.
*/

#pragma once
#ifndef __TRANSACTIONS_H_INCLUDED__
#define __TRANSACTIONS_H_INCLUDED__
#include "Account.h"

namespace Transactions
{
	//To create the new Account of customer.
	bool openAccount(Account*);
	//To deposit Amount in given account 
	bool depositAmount(Account*, double& amount);
	//To withdraw Amount in given account
	bool withdrawalAmount(Account*, double& amount);
	//Display All The Account Information of given account
	void displayAccount(Account*);
	//Display Transaction Information 
	void displayAllTransactions(); 
	//To delete given Account 
	void deleteAccount(Account*);
	//To Transfer Amount From One Account To Another Account.
	bool transferAmount(Account*, Account*, double& amount);
}

#endif