#pragma once
#ifndef __LOG_H_INCLUDED__
#define __LOG_H_INCLUDED__

#include<string>
using namespace std;

class Log
{
private:
	string LogUserId;
	string LogDateTime;
	string LogTransactionType;
public:
	Log();
	~Log();
	//To get user id
	const string& getLogUserId();
	//To get user id
	const string& getLogDateTime();
	//To get user id
	const string& getLogTransactionType();
	//To set user id
	void setLogUserId(const string&);
	//To set user id
	void setLogDateTime(const string&);
	//To set user id
	void setLogTransactionType(const string&);
	//To create new log for 
	bool addNewLog();
};

#endif