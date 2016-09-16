#include "Account.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int a = 0;
	printf("\t ****Welcome to Online Banking App****  \n\n\n");
	Account newAccount;
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
				
				newAccount.openAccount(newAccount);
				cout << "\nSample output" << newAccount.getAccountName();
				break;
			}
			
			default: cout <<"\nInvalid input entered\n";
				break;
		}
	} while (a != 9);
	

}