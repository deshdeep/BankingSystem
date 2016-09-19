#include "Account.h"
#include "Transactions.h"
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a = 0;
	printf("\t ****Welcome to Online Banking App****  \n\n\n");
	
	Account* newAccount = new Account;
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
			    
				if (Transactions::openAccount(newAccount))
				{
					cout << "\nSample output\n" << newAccount->getAccountName() << endl;
				}
				else
				{
					cout << "\nFailed to create new account\n";
				}
				break;
			}

			case 2:
			{
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
					//take care of deleting account in this case of switch instead of doing it outside of switch
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