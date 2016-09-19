/*
This class will be used as interface for various input validations
*/

#pragma once

#ifndef __INTERFACE_INPUT_VALIDATIONS_H_INCLUDED__
#define __INTERFACE_INPUT_VALIDATIONS_H_INCLUDED__

//This class act as interface.

#include<iostream>
using namespace std;

class InterfaceInputValidations
{
protected:
	//Default Constructor
	InterfaceInputValidations()
	{
		cout << "\n InterfaceInputValidations class constructor was called\n";
	}

	// Virtual destructor to handle memory leak due to deletion of base pointer pointing to derived class object
	virtual ~InterfaceInputValidations()
	{
		cout << "\n InterfaceInputValidations class destructor was called\n";
	}

	//This is generic function which will check for numeric character in any character fields...currently it will take whole string
	//and then validate it...It will return false if passed string has any numeric
	virtual bool checkForNumericInCharacterField(const string&) = 0; 

	//This is generic function which will check for alphabetic character in any numeric fields...currently it will take whole string
	//and then validate it...It will return false if passed string has any character
	virtual bool checkForCharacterInNumericField(const string&) = 0;

	//This is generic function which will check for alphabetic character in any numeric fields...currently it will take whole string
	//and then validate it...It will return false if passed string doesnot have exactly 10 digits
	virtual bool checkForValidPhoneNumber(const string&) = 0;

	//virtual bool checkForValidDate(const string&) = 0;
};


#endif