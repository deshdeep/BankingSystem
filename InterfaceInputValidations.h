/*
This class will be used as interface for various input validations
*/

#pragma once

#ifndef __INTERFACE_INPUT_VALIDATIONS_H_INCLUDED__
#define __INTERFACE_INPUT_VALIDATIONS_H_INCLUDED__

#include<iostream>
using namespace std;

class InterfaceInputValidations
{
protected:
	InterfaceInputValidations(){}

	// Virtual destructor to handle memory leak due to deletion of base pointer pointing to derived class object
	virtual ~InterfaceInputValidations()
	{
		cout << "\nInterfaceInputValidations class destructor was called\n";
	}

	//This is generic function which will check for numeric character in any character fields...currently it will take whole string
	//and then validate it
	virtual bool checkForNumericInCharacterField(const string&) = 0; 

	//This is generic function which will check for alphabetic character in any numeric fields
	virtual bool checkForCharacterInNumericField(const string&) = 0;
	virtual bool checkForValidPhoneNumber(const string&) = 0;
	//virtual bool checkForValidDate(const string&) = 0;
};


#endif