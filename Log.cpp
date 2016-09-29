#include"Log.h"
#include<iostream>
using namespace std;


Log::Log()
{
	cout << "\n Log class constructor was called\n";
}

Log::~Log()
{
	cout << "\n Log class destructor was called\n";
}

const string& Log::getLogUserId()
{
	return LogUserId;
}

const string& Log::getLogDateTime()
{
	return LogDateTime;
}

const string& Log::getLogTransactionType()
{
	return LogTransactionType;
}

void Log::setLogUserId(const string&)
{
	this->LogUserId;
}

void Log::setLogDateTime(const string&)
{
	this->LogDateTime;
}

void Log::setLogTransactionType(const string&)
{
	this->LogTransactionType;
}

bool Log::addNewLog()
{

	return true;
}