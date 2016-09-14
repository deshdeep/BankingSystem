/*
This class will be used as interface for various input validations
*/

#pragma once

#ifndef __INPUT_VALIDATIONS_H_INCLUDED__
#define __INPUT_VALIDATIONS_H_INCLUDED__

class InputValidations
{
protected:
	InputValidations(){}
	virtual ~InputValidations(){}
	virtual bool checkForNumericInCharacterField(const char&) = 0;
	virtual bool checkForCharacterInNumericField(const char&) = 0;
	virtual bool checkForValidPhoneNumber(const int&) = 0;
	virtual bool checkForValidDate(const char&) = 0;
};


#endif