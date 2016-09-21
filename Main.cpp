#include "Account.h"
#include "Transactions.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a = 0;
	printf("\t ****Welcome to Online Banking App****  \n\n\n");
	/*Account accounts[10];
	int accountIndex = 0;*/
	Account* newAccount = nullptr;
	vector<Account> accounts;
	int accountIndex = 0;
	vector<Account>::iterator it;
	do
	{
		
		printf("\nPlease enter your choice\n");
		printf("1) Open Account\n"
			   "2) Deposit Amount\n"
			   "3) Withdraw Amount\n"
			   "4) Display All Account\n"
			   "5) Display Transaction\n"
			   "6) Delete Account\n"
			   "7) Loan\n"
			   "8) Transfer Amount\n"
			   "9) Exit\n\n");
	
		/*
		scanf have one problem, if one tries to read char or double in place of int, following 
		code will enter in infinite loop.
		*/
		if (scanf("%d", &a) == 0)
		{	
			while (getchar() != '\n');
		}

		switch (a)
		{
			case 1:
			{ 

					  accounts.push_back(Account());
					  newAccount = &accounts[accountIndex];
					  if (Transactions::openAccount(newAccount))
					  {
						  cout << "\nSample output\n" << newAccount->getAccountName() << endl;
							accountIndex++;
					  }
					  else
					  {
					    	cout << "\nFailed to create new account\n";
					  }
					  break;
			}

			case 2:
			{         
					  int index;
					  cout << "\nEnter which account num to which you want to deposit\n";
					  cin >> index;
					  newAccount = &accounts[index-1];
					  cout << "\nEnter the amount to be credited/deposited\n";
					  double amountToCredit;
					  cin >> amountToCredit;
					  if (Transactions::depositAmount(newAccount, amountToCredit))
					  {
						  cout << "\nCurrent balance is : \n" << newAccount->getAccountBalance();
					  }
					  else
					  {
						  cout << "\nFailed to credit/deposit amount\n";
					  }
					  break;
			}

			case 3:
			{
					  int index;
					  cout << "\nEnter which account num from which you want to withdraw\n";
					  cin >> index;
					  newAccount = &accounts[index - 1];
					  cout << "\nEnter the amount to be withdrawn\n";
					  double amountToWithdraw;
					  cin >> amountToWithdraw;
					  if (Transactions::withdrawalAmount(newAccount, amountToWithdraw))
					  {
						  cout << "\nCurrent balance is : \n" << newAccount->getAccountBalance();
					  }
					  else
					  {
						  cout << "\nFailed to withdraw amount\n";
					  }
					  break;
			}
			
			case 4:
			{
					  //to do list
			}

			case 5:
			{
					  //to do list
			}

			case 6:
			{
					  //This module won't work with vector as vector at the end of the code deletes all the entries of vector...and delete will delete
					  //one of the entries hence at the end of the code while de-allocating memory it won't be able to fetch that location... so instead 
					  //use erase method for vector
					  int index;
					  cout << "\nEnter the account num which you want to delete\n";
					  cin >> index;
					  newAccount = &accounts[index - 1];
					  Transactions::deleteAccount(newAccount);
					  cout << "\nCurrent Account was deleted \n";  
					  break;
			}

			case 7:
			{
					  //to do list
			}

			case 8:
			{
					  //to do list
			}

			case 9:
			{
					  break;
			}

			default: 
				cout <<"\nInvalid input entered\n";
				break;
		}
	} while (a != 9);

	//delete newAccount;

	cout << "\nEnd of main\n";
	for (int i = 0; i < 12345678; i++)
	{
		cout << "";
	}
}